def factorial_number(n):
    """
    Write a Python function to calculate the factorial of a number (a non-negative integer).
    The function accepts the number as an argument.
    Example:
    Input : 6
    Output: 720
    :param number:
    :return: n factorial
    """
    result = 1
    for x in range(1, n + 1):
        result *= x

    return result


print(factorial_number(6))
