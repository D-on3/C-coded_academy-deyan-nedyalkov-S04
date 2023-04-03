import re


def text_match(text):
    """
    Write a Python program that matches a string that has an 'a' followed by anything, ending in 'b'
    Example:
    Input : "aabbbbd"
    Output: Not matched!
    param: text
    return: Not matched or matched
    """
    if re.match(r"\b[a][a-zA-z]+[b]\b", text):
        return "matched"
    return "Not matched"


print(text_match("aabbbbd"))
