from collections import Counter


def count_of_elements(elements: list):
    # 3. Write a program to iterate a given list and count the occurrence
    # of each element and create a dictionary to show the count of each element.
    return dict(Counter(elements))


# Input : [11, 45, 8, 11, 23, 45, 23, 45, 89]
print(count_of_elements([11, 45, 8, 11, 23, 45, 23, 45, 89]))
# Output : {11: 2, 45: 3, 8: 1, 23: 2, 89: 1}
