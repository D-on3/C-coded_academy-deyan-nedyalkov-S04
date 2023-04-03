#
# def add(a,b):
#     """func gets a and b adds them and returns the result
#     :param a = int
#     :param b = int
#     :return result from adding a to b
#     """
#     return a + b
#
# def devide(a,b):
#     c = 5
#     return a / b
#
#
# def main():
#     usr_input = int(input("Enter number a"))
#     usr_input2 = int(input("Enter number b")) # type string
#     result = add(usr_input,usr_input2)
#     result2 = devide(usr_input,usr_input2)
#     print(result)
#
# main()


# TODO: datatypes
from decimal import Decimal

string = "fhdshfds234#456!/"
print(id(string))
string = "pesho"
print(id(string))
print(string)
string2 = "123"
int1 = 5
int2 = 6
float1 = 4.3
float2 = 4.54756465
decimal1 = Decimal("4.23")
bool1 = True
bool2 = False

count = 0
while count < 0.6:
    count += 0.1
    print(count)
