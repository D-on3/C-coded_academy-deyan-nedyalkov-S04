# 10. Write a Python Program to Check if a Number is a Strong Number?
# A Strong number is a special number whose sum of the all digit factorial should be equal to the number itself.
#
# For example - The given number is 145, we have to pick each digit and find the factorial 1! = 1, 4! = 24, and 5! = 120.
#
# Now, we will do the sum of the factorials, we get 1+24+120 = 145, which is exactly the same as the given number.
# So we can say that 145 is a strong number.
import math


def check_strong_number(number=145):
    number_1 = str(number)
    number_for_check = 0
    for num in number_1:
        number_for_check += math.factorial(int(num))
    return number_for_check == number


print(check_strong_number(40585))