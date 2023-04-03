from functools import wraps

"""
 3. Write a decorator that prints out "Mary Spring" whenever the decorated function is called.
"""


def marry_spring(func):
    @wraps(func)
    def wrapper():
        print("Mary Spring")
        func()

    return wrapper


@marry_spring
def print_hello():
    # Missing docstrings
    """Function that prints "Some hello" string"""
    print("Some hello")


# Well done, Deyan :)

print_hello()
