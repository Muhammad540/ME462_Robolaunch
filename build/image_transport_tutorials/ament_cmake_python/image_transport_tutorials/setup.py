from setuptools import find_packages
from setuptools import setup

setup(
    name='image_transport_tutorials',
    version='0.0.0',
    packages=find_packages(
        include=('image_transport_tutorials', 'image_transport_tutorials.*')),
)
