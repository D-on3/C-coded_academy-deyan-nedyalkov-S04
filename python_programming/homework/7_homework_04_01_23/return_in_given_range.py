def max_from_two_numbers(start, end):
    """
    Function that swaps numbers
    :param start of the range  = int
    :param end  of the range = int
    :return start ,end = int
    """
    temp = 0
    if start > end:
        temp = start
        start = end
        end = temp
        return start, end
    return start, end


def return_if_number_in_range(range_begining, range_ending, number):
    # For the next functions, it is up to you to determine the names they should have
    # 3. Write a function that would return if given int is within a certain range

    range_begining, range_ending = max_from_two_numbers(range_begining, range_ending)
    print(f"{range_begining}{range_ending}")
    return number if range_begining <= number <= range_ending else None


# very good, but if range_begining > range ending?
print(return_if_number_in_range(8, 6, 4))
