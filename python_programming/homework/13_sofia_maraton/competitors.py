# Class Competitor, presenting the following data for a competitor: registration number(1-1000),
# name, last name, starting time
# (in a marathon, competitors do not always start together), time of reaching the finish line. The class must have:
# -- constructors, method __str__()
# -- Method __str__() must output the race time information of the participant in a formatted form in the form of a table
#  (the table must contain all information about the participants in a formatted form)

# A test script demonstrating the behavior of the classes and the interaction between them. (main.py)


class Competitor:
    def __init__(self, reg_number, first_name, last_name, start_tme, finish_time):
        self.__registration_number = reg_number
        self.first_name = first_name
        self.last_name = last_name
        self.start_tme = start_tme
        self.finish_time = finish_time

    @property
    def registration_number(self):
        if 0 < self.__registration_number >= 1000:
            return self.__registration_number
        raise ValueError("Invalid number")

    @registration_number.setter
    def registration_number(self, value):
        if 0 < value >= 1000:
            self.__registration_number = value
        raise ValueError("Invalid number")

    def __str__(self):

        return f"{self.registration_number}\t|\t{self.first_name} {self.last_name} | {self.start_tme}\t| {self.finish_time}\t"


compete = Competitor()