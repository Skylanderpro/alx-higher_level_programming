#!/usr/bin/python3
import math
"""
Class for magic
"""


class MagicClass:
    """Replicates the behavior of the given Python bytecode"""

    def __init__(self, radius=0):
        """Initializes MagicClass with a radius"""
        self.__radius = 0
        self.radius = radius

    @property
    def radius(self):
        """Getter for the radius attribute"""
        return self.__radius

    @radius.setter
    def radius(self, value):
        """Setter for the radius attribute"""
        if not isinstance(value, (int, float)):
            raise TypeError('radius must be a number')
        self.__radius = value

    def area(self):
        """Calculates the area based on the radius"""
        return 2 ** self.__radius * math.pi

    def circumference(self):
        """Calculates the circumference based on the radius"""
        return 2 * math.pi * self.__radius
