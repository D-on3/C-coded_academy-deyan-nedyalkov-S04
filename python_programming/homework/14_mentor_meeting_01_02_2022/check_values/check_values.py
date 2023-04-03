class CheckValues():
    def __init__(self):
        self.start = 200
        self.limit = 240
        self.values = self.find_all_between_200_240()

    def find_all_between_200_240(self):
        """
        It returns a list of all even numbers between 200 and 240
        :return: A list of all even numbers between 200 and 240.
        """
        return [var for var in range(200, 241) if var % 2 == 0]

    def 

    def __repr__(self):
        return f"{self.values}"




obj = CheckValues().find_all_between_200_240()
print(obj)
