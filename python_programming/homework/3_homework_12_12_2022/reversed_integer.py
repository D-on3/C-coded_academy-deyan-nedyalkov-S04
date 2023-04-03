def reversed_integer(number):
    """
    Given an integer, return the integer with reversed digits.
    Note: The integer could be either positive or negative.
    Example:
    Input : -258
    Output: -852
    :param number:
    :return: reversed number
    """
    number_as_string = str(number)[len(str(number)) :: -1]

    return int(number_as_string) if number > 0 else int("-" + number_as_string[0:-1])


# Well done!
print(reversed_integer(-256))
