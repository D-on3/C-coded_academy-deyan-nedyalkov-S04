
import re


def avarage_lenght(setence):
    # 4. Write a function. For a given sentence, return the average word length.
    # Note: Remember to remove punctuation first.
    # sentence1 = "Hi all, my name is Tom...I am originally from Australia."
    # sentence2 = "I need to work very hard to learn more about algorithms in Python!"

    # Output:
    # 4.2
    # 4.08
    regex= r"[A-Za-z]+|[a-zA-z]"
    matches = re.findall(regex,setence)

    len_matches = len(matches)
    word_lenght_int = 0

    for word in matches:
        #word_lenght.append(len(word))
        word_lenght_int += len(word)
    return round(word_lenght_int / len_matches,2)

# A tab.





sentence1 = "Hi all, my name is Tom...Iam originally from Australia."
sentence2 = "I need to work very hard to learn more about algorithms in Python!"

avarage_lenght(sentence1)
avarage_lenght(sentence2)