def get_is_palindrome(string):
    """
    Finish the function by adding code that returns a boolean with palindrome check.
    A string is palindrome if it is written the same forward and backward. Single char string is
    a palindrome string.
    Example:
    string = 'abcdcba'
    result: True
    :param string:
    :return: bool
    """

    return string == string[::-1]


print(get_is_palindrome("wew"))
print(get_is_palindrome("we3"))
