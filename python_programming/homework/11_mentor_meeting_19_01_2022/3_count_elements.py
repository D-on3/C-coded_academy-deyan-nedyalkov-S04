from collections import Counter


def given_occurence(list1=[11, 45, 8, 11, 23, 45, 23, 45, 89]):
    # Counting the number of times each element appears in the list.
    # 3. Write a program to iterate a given list and count the occurrence of each element and create a dictionary to show the count of each element.
    return dict(Counter(list1))
    # Input : [11, 45, 8, 11, 23, 45, 23, 45, 89]
    # Output : {11: 2, 45: 3, 8: 1, 23: 2, 89: 1}


print(given_occurence())