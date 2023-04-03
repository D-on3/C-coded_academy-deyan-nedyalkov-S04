def get_is_valid_subsequence(array, sequence):
    """
    Given two non-empty arrays of integers, finish the function by adding code that determines if
    the second array is a subsequence of the first one.
    Subsequence is not mandatory adjacent in the array.sh, but following the same order.
    Example:
    array = [5, 1, 22, 25, 6, -1, 8, 10]
    sequence = [1, 6, -1, 10]
    result: True
    :param array:
    :param sequence:
    :return: bool
    """

    actual_length_of_sequence = -len(sequence) - 1
    sequence_reversed = sequence[:actual_length_of_sequence:-1]
    counter = 1
    for idx, i in enumerate(array):
        for j in sequence_reversed:
            if j == i:
                counter += 1

    if counter == len(sequence) + 1:
        return True


print(get_is_valid_subsequence([5, 1, 22, 25, 6, -1, 8, 10], [10, -1, 6, 1]))
