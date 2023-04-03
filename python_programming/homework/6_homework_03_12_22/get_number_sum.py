def get_number_sum(array, target_sum):
    """
    Example:
    array.sh = [3, 5, -4, 8, 11, 1, -1, 6]
    target_sum = 10
    result = [-1, 11]
    :param array: Non-empty array.sh of integers
    :param target_sum: integer
    :return: new_for_ping array.sh holding 2 numbers which sum = target_sum. If no such numbers, return []
    """
    result = []

    for x in range(0, len(array) - 1):
        for y in range(len(array) - 1, -1, -1):
            if array[x] + array[y] == target_sum and x != y:
                result.append(array[y])
                result.append(array[x])

            if len(result) >= 2:
                return result

    return result


print(get_number_sum([3, 5, -4, 8, 11, 1, -1, 6], 10))
