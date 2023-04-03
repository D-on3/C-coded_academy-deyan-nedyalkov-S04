def find_count_match_words_from_list(words):
    """
    Write a Python function to
     count the number of words where the length > 2 and the first
     and last character are same from a given list of words(strings)
    Input: ['abc', '121', 'def', 'level'] -> 121, level
    Output: 2
    :param words:
    :return: number of match words
    """
    words_matched = [
        word for word in words if len(word) > 2 and word[0] == word[len(word) - 1]
    ]
    return len(words_matched)


# Well done! Very good and fast solution

print(
    find_count_match_words_from_list(["abc", "121", "def", "level"])
)  # no need space after '('
