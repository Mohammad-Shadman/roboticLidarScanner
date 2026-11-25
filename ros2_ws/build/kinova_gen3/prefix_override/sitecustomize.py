import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/mo/school/4421/project/ros2_ws/install/kinova_gen3'
