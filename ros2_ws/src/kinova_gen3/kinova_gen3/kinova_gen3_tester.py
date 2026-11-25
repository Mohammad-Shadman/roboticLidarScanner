from kinova_gen3_interfaces.srv import Status, SetGripper, GetGripper, SetJoints, GetJoints, GetTool, SetTool
import rclpy
from rclpy.node import Node
import time
import math

def do_home(node, home):
    z = Status.Request()
    future = home.call_async(z)
    rclpy.spin_until_future_complete(node, future)
    print(f"Home returns {future.result()}")
    return future.result().status

def do_set_gripper(node, set_gripper, v):
    """Set the gripper"""
    z = SetGripper.Request()
    z.value = v
    future = set_gripper.call_async(z)
    rclpy.spin_until_future_complete(node, future)
    print(f"SetGripper returns {future.result()}")
    return future.result().status

def do_get_gripper(node, get_gripper):
    """Get the current gripper setting"""
    z = GetGripper.Request()
    future = get_gripper.call_async(z)
    rclpy.spin_until_future_complete(node, future)
    print(f"GetGripper returns {future.result()}")
    return future.result().value

def do_get_tool(node, get_tool):
    z = GetTool.Request()
    future = get_tool.call_async(z)
    rclpy.spin_until_future_complete(node, future)
    print(f"GetTool returns {future.result()}")
    q = future.result()
    return q.x, q.y, q.z, q.theta_x, q.theta_y, q.theta_z

def do_set_tool(node, set_tool, x, y, z, theta_x, theta_y, theta_z):
    t = SetTool.Request()
    t.x = float(x)
    t.y = float(y)
    t.z = float(z)
    t.theta_x = float(theta_x)
    t.theta_y = float(theta_y)
    t.theta_z = float(theta_z)
    print(f"Request built {t}")
    future = set_tool.call_async(t)
    rclpy.spin_until_future_complete(node, future)
    print(f"SetTool returns {future.result()}")
    return future.result().status

def do_get_joints(node, get_joints):
    z = GetJoints.Request()
    future = get_joints.call_async(z)
    rclpy.spin_until_future_complete(node, future)
    print(f"GetJoints returns {future.result()}")
    return future.result().joints

def do_set_joints(node, set_joints, v):
    z = SetJoints.Request(joints=v)
    print(f"Request built {z}")
    future = set_joints.call_async(z)
    rclpy.spin_until_future_complete(node, future)
    print(f"SetJoints returns {future.result()}")
    return future.result().status

def main():
    rclpy.init(args=None)
    node = Node('dummy')

    get_tool = node.create_client(GetTool, "/get_tool")
    while not get_tool.wait_for_service(timeout_sec=1.0):
        node.get_logger().info('Waiting for get_tool')

    set_tool = node.create_client(SetTool, "/set_tool")
    while not set_tool.wait_for_service(timeout_sec=1.0):
        node.get_logger().info('Waiting for set_tool')

    get_joints = node.create_client(GetJoints, "/get_joints")
    while not get_joints.wait_for_service(timeout_sec=1.0):
        node.get_logger().info('Waiting for get_joints')

    set_joints = node.create_client(SetJoints, "/set_joints")
    while not set_joints.wait_for_service(timeout_sec=1.0):
        node.get_logger().info('Waiting for set_joints')

    set_gripper = node.create_client(SetGripper, "/set_gripper")
    while not set_gripper.wait_for_service(timeout_sec=1.0):
        node.get_logger().info('Waiting for set_gripper')

    get_gripper = node.create_client(GetGripper, "/get_gripper")
    while not get_gripper.wait_for_service(timeout_sec=1.0):
        node.get_logger().info('Waiting for get_gripper')

    home = node.create_client(Status, "/home")
    while not home.wait_for_service(timeout_sec=1.0):
        node.get_logger().info('Waiting for home')

    
    """
    do_home(node, home)
    do_set_gripper(node, set_gripper, 1.0)
    for i in range(10):
        print(do_get_gripper(node, get_gripper))
        time.sleep(0.2)
    do_set_gripper(node, set_gripper, 0.0)
    for i in range(10):
        print(do_get_gripper(node, get_gripper))
        time.sleep(0.2)
    do_set_joints(node, set_joints, [0, 0, 0, 0, 0, 0])
    do_set_joints(node, set_joints, [0, 45, 120, 0, 0, 0])
    """
    
    # do_get_joints(node, get_joints)
    # do_set_joints(node, set_joints, [0, -60, 90, 90, -60, 90])
    # do_set_joints(node, set_joints, [90, 0, 0, 0, 0, 0])
    """
    the max reach of the robot is 76cm or 0.76m at all angles,
    therefore i must do some trig to get the max x, and max y
    at all angles.
    """
    #do_set_joints(node, set_joints, [0, 0, 0, 0, 0, 0])


    do_get_gripper(node, get_gripper)
    # go to a safe location
    do_set_joints(node, set_joints, [0, 45, 120, 0, 0, 0])
    do_get_tool(node, get_tool)
    # set the griper open
    do_set_gripper(node, set_gripper, 0.0)
    for i in range(10):
        print(do_get_gripper(node, get_gripper))
        time.sleep(0.2)
    # move to pick up lidar
    do_set_tool(node, set_tool, 0.3, 0, 0.0, 0, 180, 0)
    # grab the lidar
    do_set_gripper(node, set_gripper, 1.0)
    for i in range(10):
        print(do_get_gripper(node, get_gripper))
        time.sleep(0.2)
    do_set_tool(node, set_tool, 0.3, 0, 0.2, 0, 180, 0)
    circRad = 0.15
    for i in range(10,21,1):
        for theta in range(0,250, 1):
            x = circRad * math.cos(math.pi * float(theta)/180)
            y = circRad * math.sin(math.pi * float(theta)/180)
            do_set_tool(node, set_tool, 0.25 + x, 0.25 + y, float(i)/100, 0, 180, theta-90)
            
        # do_set_tool(node, set_tool, 0.25 + circRad * math.cos(math.pi * float(180)/180), 0.25 + circRad * math.sin(math.pi * float(180)/180), 0.01, 0, 180, 0)
        # do_set_gripper(node, set_gripper, 0.0)
        # for i in range(1):
        #     print(do_get_gripper(node, get_gripper))
        #     time.sleep(0.2)
        # do_set_tool(node, set_tool, 0.25 + circRad * math.cos(math.pi * float(180)/180), 0.25 + circRad * math.sin(math.pi * float(180)/180), 0.01, 0, 180, 0)
        # do_set_gripper(node, set_gripper, 1.0)
        # for i in range(1):
        #     print(do_get_gripper(node, get_gripper))
        #     time.sleep(0.2)
        i = i + 2
        for theta in range(250,0, -1):
            x = circRad * math.cos(math.pi * float(theta)/180)
            y = circRad * math.sin(math.pi * float(theta)/180)
            do_set_tool(node, set_tool, 0.25 + x, 0.25 + y, float(i)/100, 0, 180, theta-90)


    do_set_tool(node, set_tool, 0.3, 0, 0.0, 0, 180, 0)
    do_set_gripper(node, set_gripper, 0.0)
    for i in range(10):
        print(do_get_gripper(node, get_gripper))
        time.sleep(0.2)
    

    # for every height from 0.1 to 0.4
    # for i in range(10,41,2):
    #     for theta in range(0,181, 10):
    #         x = circRad * math.cos(math.pi * float(theta)/180)
    #         y = circRad * math.sin(math.pi * float(theta)/180)
    #         do_set_tool(node, set_tool, 0.25 + x, 0.25 + y, float(i)/100, 0, 180, theta+90)

    #     do_set_tool(node, set_tool, 0.25 + circRad * math.cos(math.pi * float(180)/180), 0.25 + circRad * math.sin(math.pi * float(180)/180), 0.01, 0, 180, 180+90)
    #     do_set_gripper(node, set_gripper, 0.0)
    #     for i in range(10):
    #         print(do_get_gripper(node, get_gripper))
    #         time.sleep(0.2)
    #     do_set_tool(node, set_tool, 0.25 + circRad * math.cos(math.pi * float(180)/180), 0.25 + circRad * math.sin(math.pi * float(180)/180), 0.3, 0, 180, 90)
        
    #     do_set_tool(node, set_tool, 0.25 + circRad * math.cos(math.pi * float(180)/180), 0.25 + circRad * math.sin(math.pi * float(180)/180), 0.01, 0, 180, 90)
    #     do_set_gripper(node, set_gripper, 1.0)
    #     for i in range(10):
    #         print(do_get_gripper(node, get_gripper))
    #         time.sleep(0.2)

    #     for theta in range(180,361, 5):
    #         x = circRad * math.cos(math.pi * float(theta)/180)
    #         y = circRad * math.sin(math.pi * float(theta)/180)
    #         do_set_tool(node, set_tool, 0.25 + x, 0.25 + y, float(i)/100, 0, 180, theta-90)


    # do_set_tool(node, set_tool, 0.3, 0, 0.0, 0, 180, 0)
    # do_set_gripper(node, set_gripper, 0.0)
    # for i in range(10):
    #     print(do_get_gripper(node, get_gripper))
    #     time.sleep(0.2)
    
    # for i in range(0,5):
    #     do_set_tool(node, set_tool, float(i)/10.0, 0, 0.5, 0, 0, 0)
    # do_set_joints(node, set_joints, [0, 0, 0, 0, 0, 0])
    # for i in range(0,5):
    #     do_set_tool(node, set_tool, 0, float(i)/10.0, 0.5, 0, 0, 0)
    # do_set_joints(node, set_joints, [0, 0, 0, 0, 0, 0])
    # for i in range(3,10):
    #     do_set_tool(node, set_tool, 0, 0, float(i)/10.0, 0, 0, 0)
    # do_set_joints(node, set_joints, [0, 0, 0, 0, 0, 0])
    # #time.sleep(5)
    """
    do_set_tool(node, set_tool, 0, 0, 1.0, 0, 0, 0)
    time.sleep(0.5)
    do_set_tool(node, set_tool, 0.3, 0, 0.8, 45, 0, 0)
    time.sleep(0.5)
    do_set_tool(node, set_tool, 0.3, 0, 0.7, 0, 45, 0)
    time.sleep(0.5)
    do_set_tool(node, set_tool, 0.3, 0, 0.5, 0, 0, 45)
    time.sleep(0.5)
    do_set_tool(node, set_tool, 0.3, 0, 0.3, 0, 0, 0)
    do_get_tool(node, get_tool)
    do_get_joints(node, get_joints)
    """
    do_set_joints(node, set_joints, [0, 45, 120, 0, 0, 0])
    

if __name__ == '__main__':
    main()


