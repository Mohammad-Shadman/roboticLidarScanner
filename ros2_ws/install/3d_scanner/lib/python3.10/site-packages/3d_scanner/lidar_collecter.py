import math
import cv2
import numpy as np
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Range
from kinova_gen3_interfaces.srv import GetTool


def euler_from_quaternion(quaternion):
    """
    Converts quaternion (w in last place) to euler roll, pitch, yaw
    quaternion = [x, y, z, w]
    """
    x = quaternion.x
    y = quaternion.y
    z = quaternion.z
    w = quaternion.w

    sinr_cosp = 2 * (w * x + y * z)
    cosr_cosp = 1 - 2 * (x * x + y * y)
    roll = np.arctan2(sinr_cosp, cosr_cosp)

    sinp = 2 * (w * y - z * x)
    pitch = np.arcsin(sinp)

    siny_cosp = 2 * (w * z + x * y)
    cosy_cosp = 1 - 2 * (y * y + z * z)
    yaw = np.arctan2(siny_cosp, cosy_cosp)

    return roll, pitch, yaw


# def do_get_tool(node, get_tool):
#     z = GetTool.Request()
#     future = get_tool.call_async(z)
#     rclpy.spin_until_future_complete(node, future)
#     print(f"GetTool returns future.result()")
#     q = future.result()
#     node.cur_x = q.x
#     node.cur_y = q.y
#     node.cur_z = q.z
#     node.cur_tx = q.theta_x
#     node.cur_ty = q.theta_y
#     node.cur_tz = q.theta_z



import numpy as np


class Screen:
    def __init__(self, ww, hh, f):
        self.w = ww
        self.h = hh
        self.fov = 0.0
        self.focal = f
        self.ratio = ww / hh

        # Image buffer: height x width x RGB
        self.virtualScreen = np.zeros((hh, ww, 3), dtype=np.uint8)

        self.center = np.array([ww / 2, hh / 2, 0.0], dtype=float)

    def projectOntoScreenPinHole(self, point):
        # point is a NumPy vector of length 3
        if point[0] <= 0:
            return

        d = np.linalg.norm(point)

        xp = (((self.focal * point[1] / point[0]) / self.ratio + 1) / 2) * self.w
        yp = (((self.focal * point[2] / point[0]) + 1) / 2) * self.h

        if (xp < 0 or xp >= self.w or
            yp < 0 or yp >= self.h or
            not np.isfinite(xp) or
            not np.isfinite(yp)):
            return

        colour = int(255 / (1 + 0 * d + 0.001 * d * d))
        #colour = int(255)
        self.virtualScreen[int(yp), int(xp)] = [colour, colour, colour]

    def clearScreen(self):
        self.virtualScreen.fill(0)

    def drawLine(self, a, b, size):
        diff = b - a

        cross = np.array([
            a[1] * b[2] - a[2] * b[1],
            b[0] * a[2] - a[0] * b[2],
            a[0] * b[1] - a[1] * b[0]
        ])

        norm = cross / np.linalg.norm(cross) if np.linalg.norm(cross) != 0 else np.zeros(3)

        for i in np.arange(0, 1, 0.01):
            self.projectOntoScreenPinHole(
                a + norm * 0.005 + diff * i, size
            )

            self.projectOntoScreenPinHole(
                a - norm * 0.005 + diff * i, size
            )

            self.projectOntoScreenPinHole(
                a + diff * i, size
            )

    def writeScreen(self):
        # Flip vertically to preserve the original C++ orientation
        frame = np.flipud(self.virtualScreen)
        
        # OpenCV expects BGR rather than RGB
        frame = cv2.cvtColor(frame, cv2.COLOR_RGB2BGR)
        
        cv2.imshow("Virtual Screen", frame)
        
        # Process window events; 1 ms delay
        cv2.waitKey(20)
    
class CollectLidar(Node):
    _WIDTH = 1000
    _HEIGHT = 1000
    
    def __init__(self):
        super().__init__('collect_lidar')
        self.get_logger().info(f'{self.get_name()} created')
        self.tool_pose = None
        self.currLidarRange = 0
        self.lidarRange = 0
        self.tool_request_pending = False
        self.screen = Screen(self._WIDTH, self._HEIGHT, 1)
        self.create_subscription(Range, "/lidar/data", self._lidar_callback, 10)
        self.timer = self.create_timer(0.05, self.get_tool_info)
        self.timerFrames = self.create_timer(0.12, self._screenUpdate)
        self.dx = 0
        self.dy = 0
        self.dz = 0
        self.cli = self.create_client(GetTool, '/get_tool')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Service not available, waiting...')
            self.req = GetTool.Request()

    def get_tool_info(self):
        if self.tool_request_pending:
            return

        request = GetTool.Request()

        future = self.cli.call_async(request)

        self.tool_request_pending = True

        future.add_done_callback(
            self._tool_response_callback
        )

    def _tool_response_callback(self, future):
        self.tool_request_pending = False
        try:
            response = future.result()
            if response is None:
                self.get_logger().error(
                    'GetTool returned no response'
                )
                return
            # Cache latest tool position
            self.tool_pose = (
                response.x,
                response.y,
                response.z,
                response.theta_x,
                response.theta_y,
                response.theta_z
            )
        except Exception as e:
            self.get_logger().error(
                f'GetTool request failed: {e}'
            )
            return
        x, y, z, theta_x, theta_y, theta_z = self.tool_pose
        self.lidarRange = self.currLidarRange
        self.dx = x + math.cos(theta_z) * self.currLidarRange
        self.dy = y + math.sin(theta_z) * self.currLidarRange
        self.dz = z
        # self.screen.projectOntoScreenPinHole(dx, dy, dz)
        

    def _lidar_callback(self, msg):
        self.currLidarRange = msg.range
        
        
    def _screenUpdate(self):
        # self.screen.drawLine(np.array([10, 0, 0]), np.array([10, 0, self.lidarRange*10]), 3)
        point = np.array([self.dx, self.dy, self.dz])
        self.screen.projectOntoScreenPinHole(point)
        self.screen.writeScreen()
        #self.screen.clearScreen()

def main(args=None):
    rclpy.init(args=args)
    node = CollectLidar()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
            pass
    rclpy.shutdown()



if __name__ == '__main__':
    main()
