# 9. Write a Python function that takes a list of words and return the longest word and the length of the longest one.

# Input: ["Python", "Exercises", "Great"]
# Output:
# Longest word:  Exercises
# Length of the longest word:  9
from sys import maxsize


def longest_word(words: str):

    """Function that returns the bigger length element in the list  + the value of its lenght"""
    longest_element_str = ""
    length_longest_word = -maxsize


    for word in words:
        if len(word) > length_longest_word:
            longest_element_str = word
            length_longest_word = len(word)
    """ This is one of the opition
    return f"Longest word:  {longest_element_str}\nLength of the longest word:  {length_longest_word}"
    """
    """ This is the second """
    return longest_element_str,length_longest_word

print(longest_word(["Python", "Exercises", "Great"]))
