from builder.figures.side1 import Side


class Square:
    def __init__(self, side: Side):
        self.side_ab = self.__validate_side(side)
        self.side_bc = self.__validate_side(side)
        self.side_cb = self.__validate_side(side)
        self.side_da = self.__validate_side(side)
        self.area = self.area_calc()

    def __validate_side(self, side):
        if side < 4:
            raise ValueError("The side should be at least 4cm")
        else:
            return side

    def area_calc(self):
        return self.side_da * self.side_cb

    def substract_from_area(self, area_triangle):
        self.area -= area_triangle

    def __repr__(self):
        return f"==Square information==\n" \
               f"=side_A = {self.side_ab}=\n" \
               f"=side_B = {self.side_bc}=\n" \
               f"=side_c = {self.side_cb}=\n" \
               f"=side_d = {self.side_da}=\n" \
               f"Area {self.area}"
