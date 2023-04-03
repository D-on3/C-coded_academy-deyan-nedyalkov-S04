def get_titled_string(sentence):
    """
    :param sentence:
    :return: Return a titled and lower version of the sentence
    """
    titled = sentence.lower()
    titled = sentence.title()

    # titled = sentence.lower()
    # titled= sentence.capitalize()

    return titled


print("Output task : get_titled_string")
print(get_titled_string("TesT foR prInt nesSsFsFDfS"))
