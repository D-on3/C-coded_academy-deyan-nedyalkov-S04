def get_abbreviation(string):
    """
    :param string:
    :return: abbreviation from the string (first 3 symbols).
    If string is shorter than 5 chars, return it all.
    """
    if len(string) < 5:
        return string
    temp_string = ""

    for char in string:
        if len(temp_string) >= 3:
            break
        temp_string += char
    return temp_string


print("Output task : get_abbreviation")
print(get_abbreviation("nesh"))
print(get_abbreviation("neshtooooooooooooo"))
