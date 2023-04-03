import random


def get_min_of_three_members(x, y, z):
    # finish the function by adding code that would return the minimum of x, y and z
    # Use another function to find the minimum of y and z
    # Do not use the builtin min()

    MIN_VALUE = 0

    if x < y and x < z:
        MIN_VALUE = x
    if y < x and y < z:
        MIN_VALUE = y
    if z < x and z < x:
        MIN_VALUE = z

    return MIN_VALUE


# print(get_min_of_three_members(3,2,1))


def reverse_string(string):
    # Add code that would return reversed string
    # Do not use slice notation or reverse()
    reversed_string = ""
    for idx_char in range(len(string) - 1, -1, -1):
        reversed_string += string[idx_char]
    return reversed_string


# print(reverse_string("Something diffrent in this pot of grey!"))


def return_if_number_in_range(range_begining, range_ending, number):
    # For the next functions, it is up to you to determine the names they should have
    # 3. Write a function that would return if given int is within a certain range
    if range_begining <= number >= range_ending:
        return number


def squared_values():
    # 4. Write a Python function to create and print a list where the values are square of numbers
    # between 1 and 30 (both included)

    # OPTION ON3
    start = 1
    limit = 31
    squared_vars = [start * start for start in range(start, limit)]
    # OPTION TW0
    return squared_vars


print(squared_values())

# def squared_values_v2():
#     # 4. Write a Python function to create and print a list where the values are square of numbers
#     # between 1 and 30 (both included)
#
#     # OPTION ON3
#     start = 1
#     limit = 31
#     # OPTION TW0
#     sqrt_list = []
#     for element in range(start, limit):
#          var = yield element * element
#          sqrt_list.append(var)
#
# print(list(squared_values_v2()))


def print_nested_lists(given_sequence=[[1, 2, [3, 4, [6]]], [[], [], [3, 4, 5]]]):
    # **5. Write a function that accepts multidimensional list and prints out list elements nested by
    # their dimension:
    # Example: [[1, 2, [3, 4, [6]]], [[], [], [3, 4, 5]]]
    # 1, 2
    #      3, 4
    #          6
    #
    #
    #          3, 4, 5
    #
    # Hint: You may, or you may not use recursion
    # counter = 0
    #
    return print_nested_lists()
    # for nested_list in given_sequence:
    #     for new_list in nested_list:
    #         tabulation  = counter * '\t'
    #         print(f"{tabulation}{new_list}")
    #     counter += 1


print_nested_lists()


from datetime import date


from datetime import datetime, timedelta
from functools import wraps


def check_day_of_week(func):
    @wraps(func)
    def wrapper():
        today = datetime.today().strftime("%A")
        var = func()
        print(f"Print var : {var} {today}")
        if today == "Friday" or today == "Wednesday" or today == "Sunday":
            return var - 1.5
        return var

    return wrapper


@check_day_of_week
def number_return():
    return 4  # random.randint(1,220)


print(number_return())


def login_required(func):
    @wraps(func)
    def wrapper(**kwargs):
        usr, logged = kwargs.items()
        if logged[1] == False:
            print("Login required")
        else:
            print("Welcome")

    return wrapper


def marry_spring(func):
    @wraps(func)
    def wrapper(**kwargs):
        print("Mary Spring")

    return wrapper


@marry_spring
@login_required
def check_credentials(credentials):
    print(credentials)


person1 = {"name": "User name", "logged": True}
person2 = {"name": "User name", "logged": False}
check_credentials(**person1)
check_credentials(**person2)

"""
 Decorators
 1. Write a decorator that would be used on a function that return a number. If today is wednesday,
 friday, or sunday, the function should return the number decreased byt 1.5.
 2. Write decorator login_required that would be used to check if a user is logged, and if not,
 it should print out "Login required", and if user is logged, the decorated function should print
 "Welcome"
 For user you can use {'name': 'User name', 'logged': True / False}
 3. Write a decorator that prints out "Mary Spring" whenever the decorated function is called.
"""
import contextlib


@contextlib.contextmanager
def looking_glass(string):
    yield print(string[-1::-1])


# Generator & decorator ***
# Define looking_glass context manager that should print out text reversed
# version while Context manager is active
some_variable = "Pesho, Gosho, Mincho"
with looking_glass(some_variable):
    print(some_variable)  # Should print out 'Pesho, Gosho, Mincho'


# # Output: ohcniM ,ohsoG ,ohseP
#
# print("Pesho, Gosho, Mincho")  # Should print out 'Pesho, Gosho, Mincho'
# #
#


"""
1 . Write a decorator that would be used on a function 
 that print a  random number from 1 to 100 and decorators should be repeat n times function.
 Input : print_random_int --> While repeat_decorator(times=5)
 Output: 15, 20, 18, 13, 92
"""
from functools import partial, wraps


def repeat_decorator(times):
    def decorator(func):
        @wraps(func)
        def wrapper():
            n = 0
            while n < times:
                func()
                n += 1

        return wrapper

    return decorator


@repeat_decorator(5)
def print_random_int():
    return print(random.randint(1, 100))


print_random_int()
