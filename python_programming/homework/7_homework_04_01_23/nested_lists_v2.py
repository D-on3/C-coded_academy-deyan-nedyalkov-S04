COUNT = [0]


def return_non_list_values(sequence):
    return [str(var2) for var2 in sequence if isinstance(var2, int)]


def return_list_values(sequence):
    return [var2 for var2 in sequence if isinstance(var2, list)]


def print_nested_lists(given_sequence=[[1, 2, [3, 4, [6]]], [[], [], [3, 4, 5]]]):
    # **5. Write a function that accepts multidimensional list and prints out list elements nested by
    # their dimension:
    """Recursive function that prints nested lists"""

    tabulation = COUNT[-1] * "\t"

    not_list = return_list_values(given_sequence)  # if isinstance(var2, list)]
    is_list = return_list_values(given_sequence)
    is_list = return_list_values(is_list)
    print(not_list)
    # print(f"{tabulation}" + " ".join(not_list))
    # COUNT[0] += 1

    print_nested_lists(is_list)


# Example: [[1, 2, [3, 4, [6]]], [[], [], [3, 4, 5]]]
# 1, 2
#      3, 4
#          6
#
#
#          3, 4, 5
#
# Hint: You may, or you may not use recursion
print_nested_lists()
