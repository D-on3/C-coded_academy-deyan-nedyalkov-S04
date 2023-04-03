import csv
import os
from contextlib import suppress
from pathlib import Path
import random

current_directory = Path(os.path.abspath(__file__)).parent


def generate_random():
    return random.choice(range(65, 92))


text_file_path = os.path.join(current_directory, "students_exams.csv")


# Example for reading .csv file
HEADER_ROW = ["student", "exam", "points"]
# set default
student_info = {}


student_passed = {}
student_failed = {}

with open(text_file_path, "r") as csv_source:
    reader = csv.reader(csv_source)
    print(type(reader))

    for student, exam_num, result in reader:

        if [student, exam_num, result] == HEADER_ROW:
            continue
        # if not all([student,exams_passed,result]):
        #     continue
        student_info.setdefault(student, [])
        student_info[student].append(int(result))

        # print([student,exam_num,result])


def retake(grades):

    for grade in grades:
        if grade >= 80:
            continue
        current_grade = generate_random()


for student, grades in student_info.values():
    if sum(grades) / 10 >= 80:
        student_passed[student] = grades
        continue
    student_passed[student] = grades


# SORT IN DESCENDING ORDER
# PROCESSING FOR STUDENT_RETAKE
