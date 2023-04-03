def generator_from_to(end, start=2):
    """ Function that returns give list in range
    :params end of the seq
    :params  start of the seq
    :return list object
    Explanation why without yield
       list comprehensions use yield under the hood which gives the advantage of 
       optimized code at least on the level of memory """
    return [num for num in range(start, end + 1)]


def check_are_divisible_by_five(sequence: list):
    """Function that generates number
     if the condition number to be lower than 5
     else if it's not lower than 5 to not be divisible to 5
     :params list
     returns generator object"""
    for number in sequence:
        if number <= 5:
            yield number
        elif number % 5 != 0:
            yield number


def primes(limit):
    """
    2.Write a function to find all prime numbers from 2 to limit with Sieve of Eratosthones algorithm.
    Extra: create a function with generators
    Input: 100
    Output: [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97]
    """
    sequence = generator_from_to(limit)
    first_sort = [number for number in sequence if not number % 2 == 0 and number * number >= number]
    return list(check_are_divisible_by_five(first_sort))


print(primes(100))
