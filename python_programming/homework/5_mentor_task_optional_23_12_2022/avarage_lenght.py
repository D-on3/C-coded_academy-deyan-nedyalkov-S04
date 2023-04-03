import re


def avarage_lenght(sentence: str):
    # 4. Write a function. For a given sentence, return the average word length.
    # Note: Remember to remove punctuation first.

    striped_sentence = re.sub(r"[^\w]", " ", sentence)
    list_of_words = striped_sentence.split()
    lenght_sentence = len(list_of_words)
    counter = 0

    for word in list_of_words:
        counter += len(word) / len(list_of_words)

    return round(counter, 2)


# Output:
# 4.2
sentence1 = "Hi all, my name is Tom...I am originally from Australia."
print(avarage_lenght(sentence1))
# 4.08
sentence2 = "I need to work very hard to learn more about algorithms in Python!"
print(avarage_lenght(sentence2))
