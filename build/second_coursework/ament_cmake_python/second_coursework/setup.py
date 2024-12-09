from setuptools import find_packages
from setuptools import setup

setup(
    name='second_coursework',
    version='0.0.0',
    packages=find_packages(
        include=('second_coursework', 'second_coursework.*')),
)
