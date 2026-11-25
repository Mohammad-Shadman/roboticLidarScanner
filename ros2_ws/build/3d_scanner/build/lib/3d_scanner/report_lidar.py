import math
import numpy as np
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Range
import serial


class ReportLidar(Node):
    def __init__(self):
        super().__init__('report_lidar')
        self.get_logger().info(f'{self.get_name()} created')
        self.ser = serial.Serial(
            port='/dev/ttyUSB0',
            baudrate=115200,
            bytesize=serial.EIGHTBITS,
            parity=serial.PARITY_NONE,
            stopbits=serial.STOPBITS_ONE,
            timeout=1
        )
        self.pub = self.create_publisher(Range, "/lidar/data", 300)

        self.timer = self.create_timer(0.001, self.read_serial)

    def read_serial(self):
        if not self.ser.in_waiting:
            return
        
        line = self.ser.readline().decode(
            'utf-8',
            errors='ignore'
        ).strip()
        
        if not line.startswith('DIST:'):
            return
        
        try:
            distance_mm = int(line.split(':')[1])
            
            msg = Range()
            
            msg.header.stamp = self.get_clock().now().to_msg()
            msg.header.frame_id = 'lidar_link'
            
            msg.radiation_type = Range.INFRARED
            msg.field_of_view = 0.03
            msg.min_range = 0.05
            msg.max_range = 20.0
            msg.range = distance_mm / 1000.0
            
            self.pub.publish(msg)
                        
        except (ValueError, IndexError):
            self.get_logger().warning('Invalid LiDAR measurement')


def main(args=None):
    rclpy.init(args=args)
    node = ReportLidar()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    node.ser.close()
    node.destroy_node()
    rclpy.shutdown()



if __name__ == '__main__':
    main()
