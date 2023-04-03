from figures.side1 import Side
from figures.square import Square
from figures.triangle import Triangle


class Builder:
    def __init__(self, square: Square, triangle: Triangle):
        self.square = square
        self.triangle = triangle

    def check_areas(self):
        if self.square.area > self.triangle.area:
            return "True"
        return "False"
