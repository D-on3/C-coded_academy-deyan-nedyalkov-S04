# 7. Write a python program to find h.c.f. of two numbers
#
# For any two numbers that are inputs given by the user, we have to calculate and print the h.c.f. of that numbers.
# Case1: If the user inputs the numbers 4 and 6.
#
#
#             then the output should be ‘2’.
#
# Case2: If the user inputs the numbers 5 and 7.
#
#             then the output should be ‘1’.


def find_hcf(num1,num2):
    # Everything divides 0
    if num1 == 0 or num2 == 0:
        return num1 + num2

    # base case
    if num1 == num2:
        return num1

    # num1>num2
    if num1 > num2:
        return find_hcf(num1 - num2, num2)
    else:
        return find_hcf(num1, num2 - num1)


print(find_hcf(5,7))