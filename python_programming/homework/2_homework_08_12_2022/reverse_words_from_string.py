def reverse_words_from_string(input_string):
    """
    Given a string , reverse words.
    Example:
    Input : Today is our Python exercises with group one from strypes-04 course.
    Output: course. strypes-04 from one group with exercises Python our is Today
    :param string:
    :return: reversed string
    """
    temp_list = input_string.split()
    return " ".join(temp_list[-1::-1])


# well done, maybe join method should to be in function
print(
    reverse_words_from_string(
        "Today is our Python exercises with group one from strypes-04 course."
    )
)
