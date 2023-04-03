def get_even_numbers(array):
    # Finish the function by adding code that would print out only the even numbers.
    # for element in array:
    #     if element % 2 != 0:
    #         print(element)
    [print(element) for element in array if element % 2 != 0]


# Well done! Also make with list comprehensions
get_even_numbers([3, 4, 5, 8, 6, 7, 9])
