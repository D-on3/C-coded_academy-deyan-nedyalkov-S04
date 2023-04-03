from functools import wraps
from random import randint

"""
1 . Write a decorator that would be used on a function 
 that print a  random number from 1 to 100 and decorators should be repeat n times function.

 Input : print_random_int --> While repeat_decorator(times=5)
 Output: 15, 20, 18, 13, 92
"""


def repeat_decorator(times):
    def decorator(func):
        @wraps(func)
        def wrapper():
            n = 0
            while n < times:
                func()  # very good
                n += 1

        return wrapper

    return decorator


@repeat_decorator(7)  # no need random times, only random number
def print_random_int():
    # missing docstring
    """Function that prints random number"""
    print(randint(1, 100))


print_random_int()
