from collections import Counter
import re


class CalcString():
    def __init__(self):
        self.str = input("Enter Str")
        self.output = {}

    def calc_freq(self):
        """
        It takes a string, splits it into words, counts the number of times each
        word appears, and returns a dictionary of the words and their counts
        :return: A dictionary of the words in the string and the number of times
        they appear.
        """
        value = re.findall(r"[\w']+", self.str)
        count_values = dict(Counter(value))
        return dict(sorted(count_values.items(), key=lambda item: item[0]))

    def __repr__(self):
        return f"{self.output}"


obj = CalcString()
obj.calc_freq()

var_input = "I felt happy because I saw the others were happy and because I knew I should feel happy, but I was not really happy."
var_output = {'I': 5, 'and': 1, 'because': 2, 'but': 1, 'feel': 1, 'felt': 1,
              'happy': 4, 'knew': 1, 'not': 1, 'others': 1, 'really': 1,
              'saw': 1, 'should': 1, 'the': 1,
              'was': 1, 'were': 1}
