import random
from functools import wraps


def even_decor(func):
    @wraps(func)
    def wrapper():
        number = func()
        if number % 2 == 0:
            return number - 3.8
        return number

    return wrapper


@even_decor
def num():
    return random.randint(1, 100)


print(num())
