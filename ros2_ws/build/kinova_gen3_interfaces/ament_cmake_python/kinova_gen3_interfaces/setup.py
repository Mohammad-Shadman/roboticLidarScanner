from setuptools import find_packages
from setuptools import setup

setup(
    name='kinova_gen3_interfaces',
    version='0.0.1',
    packages=find_packages(
        include=('kinova_gen3_interfaces', 'kinova_gen3_interfaces.*')),
)
