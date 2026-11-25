from setuptools import find_packages, setup

package_name = '3d_scanner'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='mo',
    maintainer_email='m.sh2003@yahoo.com',
    description='takes one point lidar scans and turns them into a 3d model',
    license='Apache-2.0',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            'lidar_collecter = 3d_scanner.lidar_collecter:main',
            'report_lidar = 3d_scanner.report_lidar:main'
        ],
    },
)
