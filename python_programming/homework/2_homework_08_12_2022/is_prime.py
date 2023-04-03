import math


# one empty line
def is_prime_number(number):  # maybe num or number is better choice, not n
    # Add docstring of what exactly the function does
    """The function check is the given number a prime number or not
    :param number
    :return boolean
    """
    if number < 2:
        return False
    squared = int(math.sqrt(number))
    for i in range(2, squared + 1):
        if number % i == 0:
            return False
    return True


def find_prime_divisors(number, prime_list):
    """
    Given one integer , find all prime divisors of a number.
    Definition: A prime number is a natural number greater than 1 that has no positive divisors other than 1 and itself.
    Example:
    Input : 60
    Output: [2, 3, 5]
    :param number:
    :param prime_list:
    :return: prime_list
    """

    for num in range(2, number + 1):  # space between 2 and number + 1
        if is_prime_number(num) and number % num == 0:  # no need spae between 0 and :
            prime_list.append(num)

    return prime_list


print(find_prime_divisors(60, []))
