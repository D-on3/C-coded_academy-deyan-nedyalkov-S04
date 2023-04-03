COUNT = [0]


def print_nested_lists(given_sequence=[[1, 2, [3, 4, [6]]], [[], [], [3, 4, 5]]]):
    # **5. Write a function that accepts multidimensional list and prints out list elements nested by
    # their dimension:
    """Recursive function that prints nested lists"""

    tabulation = COUNT[-1] * "\t"
    for x in given_sequence:
        not_list = [str(var2) for var2 in x if isinstance(var2, int)]  # if isinstance(var2, list)]
        is_list = [var2 for var2 in x if isinstance(var2, list)]
        is_list = [var2 for var2 in is_list if isinstance(var2, list)]

        print(f"{tabulation}" + " ".join(not_list))
        COUNT[0] += 1

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
