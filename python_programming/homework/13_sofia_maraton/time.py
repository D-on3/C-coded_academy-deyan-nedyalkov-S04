import datetime

""" Class that represents Time object which takes arguments as:
:params hours
:params minutes
:params seconds
"""


class Time:  # missing docstrings
    def __init__(self, hours: int, minutes: int, seconds: int):
        self.__hours = hours
        self.__minutes = self.__validate_time(minutes)
        self.__seconds = self.__validate_time(seconds)

    def __validate_time(self, sixty):
        if sixty > 60:
            return ValueError("Invalid value")
        return sixty

    @property
    def hours(self):
        if self.__hours > 24:
            raise ValueError("Invalid Value")
        return self.__hours

    @hours.setter
    def hours(self, value):
        self.__hours = value

    @property
    def minutes(self):
        return self.__minutes

    @minutes.setter
    def minutes(self, value):
        self.__minutes = value

    @property
    def seconds(self):
        return self.__seconds

    @seconds.setter
    def seconds(self, value):
        self.__seconds = value

    def __str__(self):
        return f"|{self.hours}:{self.minutes}:{self.__seconds}|"

    def convert_to_seconds(self, hours, minutes, seconds):
        """Function that convert the current time from hours, minutes,seconds to seconds"""
        return (hours * 3600) + (minutes * 60) + (seconds)

    def convert_to_hours(self, seconds):
        """Funciton that convert the current secconds to hours , minutes , seconds"""
        seconds = seconds % (24 * 3600)
        hour = seconds // 3600
        seconds %= 3600
        minutes = seconds // 60
        seconds %= 60
        return hour, minutes, seconds

    def time_diff(self):  # missing docstrings
        """ Method that returns difference in current time and the time given """
        currentDT = datetime.datetime.now()
        given_time_in_seconds = self.convert_to_seconds(self.hours, self.minutes, self.seconds)
        current_time_seconds = self.convert_to_seconds(currentDT.hour, currentDT.minute,
                                                       currentDT.second)

        if self.hours >= currentDT.hour:
            hours, minutes, seconds = \
                self.convert_to_hours(given_time_in_seconds - current_time_seconds)
        else:
            hours, minutes, seconds = \
                self.convert_to_hours(current_time_seconds - given_time_in_seconds)

        return Time(hours, minutes, seconds)
