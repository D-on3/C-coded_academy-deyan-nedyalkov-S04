from collections import Counter


def dublicate_el(list_of_values =[10, 20, 30, 30, 60, 40, 30, 60, 70, 80]):
    # 1. Write a function that prints all duplicate items from a given list
    # Input: [10, 20, 30, 30, 60, 40, 30, 60, 70, 80]
    # Expected Output: -
    #
    # [20, 30, 60]
    list_counter = dict(Counter(list_of_values))
    dict_for_return ={x:y for x,y in list_counter.items() if y >= 2 }
    return list(dict_for_return)


print(dublicate_el())


