from setuptools import find_packages
from setuptools import setup

setup(
    name='player_commands',
    version='0.0.0',
    packages=find_packages(
        include=('player_commands', 'player_commands.*')),
)
