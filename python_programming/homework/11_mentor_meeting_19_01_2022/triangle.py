class Triangle(): # miss docstring
    def __init__(self, side_a, side_b, side_c):
        self.__a = side_a
        self.__b = side_b
        self.__c = side_c
        self.area = 0 # area is needed only in method, not here 

    @property
    def a(self):
        return self.__a

    @a.setter
    def a(self, a_var):
        if a_var < 0 or a_var > 30: # <=0, because don't have side with len 0
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

    def area_cal(self): # miss docstring
        self.area = (self.__a * self.__b * self.__c) / 2 # that's not Heron formula. Area = Square root of√s(s - a)(s - b)(s - c) where s is half the perimeter, or (a + b + c)/2.

    def __repr__(self):
        return f"Heron's formula {self.area}" # I want to print sides of triangle too


tr1 = Triangle(3, 4, 5)
tr1.area_cal()
print(tr1)
