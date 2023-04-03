# no need empty line
def find_first_unique_character(string):
    """
    Write a Python function which find index of first unique character from string.
    Given a string, find the first non-repeating character in it and return its index.
    If it doesn't exist, return -1. # Note: all the input strings are already lowercase.
    Input: abcdcaf
    Output: 1 (we return 1 because b is the first non-repeating char at index 1 in the string "abcdcaf")
    :param string:
    :return: first unique character
    """
    for char in string:
        if not string.count(char) > 1:
            return string.index(char)

    return -1


print(find_first_unique_character("aa"))
# Well done!
