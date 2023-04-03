import os
import csv
from pathlib import Path


def sort_dict_by_value(dict_for_sort):
    """Function that sorts the dict by value
    :param dict_for_sort = dict
    :return sorted dict
    """
    return dict(reversed(sorted(dict_for_sort.items(), key=lambda item: item[1])))


def top_three_students(dict_top_three):
    """Function that takes the top three students with max result and stores in dict
    :param dict_top_three = dict
    :return dict
    """
    top_three = {}
    for student, result in dict_top_three.items():
        top_three[student] = result
        if len(top_three) >= 3:
            break

    return top_three


def read_data(data_from_file):
    buffer = {}
    """Read data from csv file and returns the data in the form of dict
    :param data_from_file <class '_csv.reader'>
    :return dict
    """
    for student, result in data_from_file:
        if not all([result]):
            continue
        buffer[student] = [int(result)]
    return buffer


def get_top_three_students():
    # 1. Read the students_data.csv
    # 2. Collect the student's data
    # 3. Return the top 3 students, ranked by current result.
    current_working_dir = Path(os.path.abspath(__file__)).parent
    filename = "students_data.csv"
    with open(os.path.join(current_working_dir, filename), "r") as students_data:
        data_from_file = csv.reader(students_data)
        buffer = read_data(data_from_file)

    buffer = sort_dict_by_value(buffer)
    return top_three_students(buffer)


def print_top_three_students(outer_info):
    """print top three students
    params: outer_info = top three students
    return NONE
    """
    counter = 1
    for student, result in outer_info.items():
        outer_info[student] = str(result)
        print(
            f"Top {counter} student is -{student}-, with result of -{result}- scores!"
        )
        counter += 1


outer_info = get_top_three_students()
print_top_three_students(outer_info)
