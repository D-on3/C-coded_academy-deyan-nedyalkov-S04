from collections import Counter


def find_all_doubles(sequence):
    # 1. Write a function that prints all duplicate items from a given list
    # Input: [10, 20, 30, 30, 60, 40, 30, 60, 70, 80]
    # Expected Output: -
    #
    # [20, 30, 60]
    sequence_dict = dict(Counter(sequence))
    list_1 = {x: y for x, y in sequence_dict.items() if y > 1}
    return list(list_1)


print(find_all_doubles([10, 20, 20, 30, 30, 60, 40, 30, 60, 70, 80]))
