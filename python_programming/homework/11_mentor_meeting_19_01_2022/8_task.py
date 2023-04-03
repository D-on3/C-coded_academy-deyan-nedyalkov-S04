# 8 . Write a Python program to find l.c.m. of two numbers
# For any two numbers given by the user as an input, we
# have to calculate and print the l.c.m. of that numbers using python programming language.
# Case1: If the user inputs the numbers 4 and 6.
#
#              then the output should be ‘12’.
#
# Case2: If the user inputs the numbers 5 and 7.
#
#             then the output should be ‘35’.


def l_c_m(number1, number2):
    """Function that returns lcm of the given two numbers
    :params number1 = int
    :params number2 = int
    :returns lcm = int
    """
    if number1 > 0 and number2 > 0:
        lcm = 1
        while True:
            if lcm % number1 == 0 and lcm % number2 == 0:
                return lcm # ok, but you return lcm only in if statement?
            lcm += 1

# todo: see other algorithms in internet

print(l_c_m(5, 25))
print(l_c_m(5, 7))
