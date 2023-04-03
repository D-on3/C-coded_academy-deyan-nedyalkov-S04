# 6. Write a program to check a number is Armstrong or not in python programming language
# What is Armstrong Number?
# It is a number which is equal to the sum of cube of its digits.
# For eg: 153, 370 etc.
# Lets see it practically by calculating it,
#
# Suppose I am taking 153 for an example
#
# First calculate the cube of its each digits
#
#   1^3 = (1*1*1) = 1
#
#   5^3 = (5*5*5) = 125
#
#   3^3= (3*3*3) = 27
#
# Now add the cube
#
#   1+125+27 = 153
#
# It means 153 is an Armstrong number.

def armstrong(num=153):
    """Function that returns is the given number armstrong number or not
    :returns  bool
    """
    return num == sum([int(x) ** len(str(num)) for x in str(num)])


print(armstrong())
