#!/usr/bin/python3
"""
This code is for a class square
"""


class Square:
    """
    A square of private instance attribure: size
    """
    def __init__(self, size=0):
        """
        Initializes the Square instance.
        """
        self.size = size

        @property
        def size(self):
            """
            Retrieve the size of a square.
            """
            return self.__size

        @size.setter
        def size(self, value):
            """
            Set the size of the square.
            """
            if not isinstance(size, int) and not value.isdigit():
                raise TypeError("size must be an integer")
            elif size < 0:
                raise ValueError("size must be >= 0")
            else:
                self.__size = size

    def area(self):
        """
        Calculates the area of the square.
        """
        return self.size ** 2
