from random import randint


def calc_random_from_a_to_b():
    # 2.Write a program to create function to calculate the sum of numbers
    # from random number to random number (0-100).
    number_one = randint(0, 100)
    number_two = randint(0, 100)
    # print(number_one, number_two)
    result = 0
    if number_one < number_two:
        for x in range(number_one, number_two):
            result += x
        return result

    for x in range(number_one, number_two, -1):
        result += x
    return result


print(f"{calc_random_from_a_to_b()}")
