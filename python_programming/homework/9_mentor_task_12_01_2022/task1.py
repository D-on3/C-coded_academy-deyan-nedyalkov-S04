# # 3. Write a decorator that would be used on a 5 functions:
# # Function 1: Add two numbers
# # Function 2: Divide two numbers
# # Function 3: Sort list ascending and return the fourth item of him.
# # Function 4: WITHOUT ARGUMENTS. Return square of number, which number is define out of function.
# # Function 5: Search a palindrome of specific word in a string. If this word doesn't exist throw an exception
# # The decorator should print name and docstring of function, parameter/s and value of function. The decorator must execute the function.
# # If the function is doesn't execute successfully, to be thrown the necessary exceptions:
# # Hint: use following exception: ZeroDivisionError, NameError, TypeError, IndexError and your Exception.
#
#
# from functools import wraps
#
#
# def my_decorator(func):
#     """Decirator that print,name docstring , parameter/s and value of given function"""
#
#     @wraps(func)
#     def wrapper(*args):
#         print("Func _name: %s | Description of function %s | parameters %s" % (
#             func.__name__, func.__doc__, (args)))
#         try:
#             value = func(*args)
#         except Exception:
#             print("Func: %s raised our Exception" % (func.__name__))
#             raise
#         # except:
#         #     print("Func: %s raised our Exception" % (func.__name__))
#         else:
#             print("result of our function is:%s " % (value))
#
#     return wrapper
#
# @my_decorator
# def add_two(number_1, number_2):
#     """Function that returns sum of two numbers"""
#     return number_1 + number_2
#
#
# # print(add_two(5,4))
# # print(add_two("5",4))
# @my_decorator
# def devision_of_two_number(number_1, number_2):
#     """Function that returns devisible of two numbers"""
#     return number_1 / number_2
#
#
# # devision_of_two_number(10,6)
# # devision_of_two_number(10,0)
#
# @my_decorator
# def sorting_list(sequence):
#     """Function that sort list ascending and return the fourth item of him."""
#     new_list = sorted(sequence)
#     return new_list[3]
#
# #
# # first_list = [5,3,3,4,5,6]
# # second_list = [5,3]
# # sorting_list(first_list)
# # sorting_list(second_list)
# number = 5
#
# @my_decorator
# def custom_sqrd_number():
#     """Function that return square of number"""
#     return number * number #change id of the variables
#
#
# # def return_palindrom(word, string):
# #     """Function that returns is the palindrome of word inside a string"""
# #
# #     for current_word in string.split():
# #         print(f"{word[-1::-1]} {current_word}")
# #         if word[-1::-1] == current_word:
# #             return True
# #
# #     raise Exception("No find palindrome word in this")
# #
# # print(return_palindrom("abc", "something meaningfull cba"))
#
# @my_decorator
# def search_palidrom_fron(word, string):
#     """Function that try to find palindrome in give string"""
#     if word == word[::-1]:
#         if word in string:
#             return True
#
#         raise Exception("Didnt find a match")
#     raise Exception(f"The word == {word} is not pallindrome")
#
#
# #try different cases





# #3. Write a decorator that would be used on a 5 functions:
# # Function 1: Add two numbers
# # Function 2: Divide two numbers
# # Function 3: Sort list ascending and return the fourth item of him.
# # Function 4: WITHOUT ARGUMENTS. Return square of number, which number is define out of function.
# # Function 5: Search a reverse of specific word in a string. If this word doesn't exist throw an exception
# # The decorator should print name and docstring of function, parameter/s and value of function. The decorator must execute the function.
# # If the function is doesn't execute successfully, to be thrown the necessary exceptions:
# # Hint: use following exception: ZeroDivisionError, NameError, TypeError, IndexError and your Exception.
#
#
# from functools import wraps
#
#
# def my_decorator(func):
#     """Decorator that print name,docstring, parameter/s and value of given function"""
#     @wraps(func)
#     def wrapper(*args):
#         #import pdb;pdb.set_trace()
#         print("Func_name: %s  | Description of function: %s | Parameters: %s " % (func.__name__, func.__doc__, (args)))
#         try:
#             value = func(*args)
#         except Exception:
#             print("Func_name: %s raised Exception" % (func.__name__))
#             raise
#         # except:
#         #     print("Func_name: %s raised default Exception" % (func.__name__))
#         #     raise
#         else:
#             print("Result of our function is: %s" % (value))
#             return value
#
#     return wrapper
#
# @my_decorator
# def add_two_numbers(number_1, number_2):
#     """Function that returns sum of two numbers"""
#     #import pdb;pdb.set_trace()
#     return number_1 + number_2
#
# # print(add_two_numbers(5 ,8))
# # print(add_two_numbers('5', 8))
#
# @my_decorator
# def division_of_two_numbers(number_1, number_2):
#     """Function that returns divisible of two numbers"""
#     return number_1 / number_2
#
# #print(division_of_two_numbers(10, 2))
# # print(division_of_two_numbers(10, 0))
#
# @my_decorator
# def sort_list(random_list):
#     """Function that sort given list and return the fourth element if exist"""
#     sorted_list = sorted(random_list)
#     return sorted_list[3]
#
# # list_1 = [5, 3]
# # list_2 = [6, 2, 1, 4, 3, 5]
# # #print(sort_list(list_1))
# # print(sort_list(list_2))
#
# num = 5
#
# @my_decorator
# def custom_square_of_number():
#     """Function that return square of number"""
#     return num * num
#
# # print(custom_square_of_number())
#
#
# @my_decorator
# def search_palindrome_from_string(word, text):
#     """Function that try to find palindrome in given string"""
#     if word == word[::-1]:
#         if word in text.split():
#             return True
#         raise Exception("No find word in this string")
#     raise Exception("Given word is not palindrome")
#
# text = "I am in the car group"
# word = "level"
# print(search_palindrome_from_string(word, text))
