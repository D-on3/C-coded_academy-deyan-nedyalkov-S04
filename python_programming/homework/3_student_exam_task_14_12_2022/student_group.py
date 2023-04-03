import csv
import random


def generate_random():
    return random.choice(range(65, 92))


def retake_exam(grade):
    for i in range(3):
        new_grade = generate_random()
        if new_grade > 80:
            return new_grade
    return grade


def retake_session(grades_list):
    for i, grade in enumerate(grades_list):
        if grade < 80:
            grades_list[i] = retake_exam(grade)
            if sum(grades_list) / len(grades_list) >= 80:
                return True
    return False


def print_dict_data(students_list):
    for curr_student, curr_grade in students_list.items():
        print(f"{curr_student} average: {sum(curr_grade) / len(curr_grade)}")


students = {}

succses_students = {}
students_retake = {}

HEADER_ROW = ["student", "exam", "points"]

with open("students_exams.csv", "r") as csv_source:
    reader = csv.reader(csv_source)

    for name, exam, points in reader:
        if [name, exam, points] == HEADER_ROW:
            continue
        students.setdefault(name, [])

        students[name].append(int(points))
    # print(name, exam, points)

for student, grades in students.items():
    if sum(grades) / len(grades) >= 80:
        succses_students[student] = grades
        continue
    if retake_session(grades):
        succses_students[student] = grades
        continue
    students_retake[student] = grades

sorted_success_students = dict(
    sorted(
        succses_students.items(),
        key=lambda item: sum(item[1]) / len(item[1]),
        reverse=True,
    )
)
sorted_retake_students = dict(
    sorted(
        students_retake.items(),
        key=lambda item: sum(item[1]) / len(item[1]),
        reverse=True,
    )
)

print(
    f"Congratulation students, you pass the session: count: {len(sorted_success_students)}"
)
print_dict_data(sorted_success_students)
print()
print()
print(f"Sory motori: count: {len(sorted_retake_students)}")
print_dict_data(sorted_retake_students)
