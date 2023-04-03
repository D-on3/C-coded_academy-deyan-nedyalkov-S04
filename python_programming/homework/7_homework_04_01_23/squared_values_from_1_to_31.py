def squared_values():
    # 4. Write a Python function to create and print a list where the values are square of numbers
    # between 1 and 30 (both included)

    # OPTION ON3
    start, limit = 1, 31
    print(
        [start * start for start in range(start, limit)]
    )  # print, no return, very good with list comprehension


squared_values()
