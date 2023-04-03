calcs_array = []


def store_calcs(number1, number2, calcs):
    """
    Write a code that stores the sum, subtract, product and reminder
    of number1 and number2 within calcs_array
    :param number1:
    :param number2:
    :param calcs: calcs_array
    :return: calcs
    """

    # first way
    sum = number1 + number2
    substact = number1 - number2
    product = number1 * number2
    remainder = number1 % number2
    calcs_array = [sum, substact, product, remainder]

    # #second way
    # calcs_array.append(sum)
    # calcs_array.append(substact)
    # calcs_array.append(product)
    # calcs_array.append(remainder)

    return calcs_array


print(store_calcs(1, 2, calcs_array))
