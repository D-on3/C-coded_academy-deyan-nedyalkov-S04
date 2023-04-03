from datetime import datetime
from functools import wraps
import random

""" Decorators
 1. Write a decorator that would be used on a function that return a number. If today is wednesday,
 friday, or sunday, the function should return the number decreased byt 1.5.
 """


def check_day_of_week(func):
    @wraps(func)
    def wrapper():
        today = datetime.today().strftime("%A")
        number_for_check = func()
        print(f"Print var:{number_for_check} {today}")
        if today == "Friday" or today == "Wednesday" or today == "Sunday":
            return number_for_check - 1.5
        return number_for_check

    return wrapper


@check_day_of_week
def number_return():
    """Function that returns  random number in the range from 1 to 220"""
    return random.randint(1, 220)


# Well done, Deyan!

print(number_return())
