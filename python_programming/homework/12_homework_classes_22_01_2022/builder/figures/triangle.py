from builder.figures.side1 import Side

class Triangle:
    def __init__(self, side_a:Side, side_b:Side, side_c:Side):
        self.__a = side_a
        self.__b = side_b
        self.__c = side_c
        self.area = self.area_cal()

    @property
    def a(self):
        return self.__a

    @a.setter
    def a(self, a_var):
        if a_var < 0 or a_var > 30:
            raise ValueError("Impossible value")
        self.__a = a_var

    @property
    def b(self):
        return self.__a

    @b.setter
    def b(self, a_var):
        if a_var < 0 or a_var > 30:
            raise ValueError("Impossible value")
        self.__a = a_var

    @property
    def c(self):
        return self.__c

    @c.setter
    def c(self, value):
        if value < 0 or value > 30:
            raise ValueError("Impossible value")
        self.__c = value

    def area_cal(self):
      return (self.__a * self.__b * self.__c) / 2

    def __repr__(self):
        return f"Heron's formula {self.area}"


