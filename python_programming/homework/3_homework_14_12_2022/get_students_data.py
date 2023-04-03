import os
import csv
from pathlib import Path


def get_students_data():
    # Finish the function by adding code that would extract the student's data from the file.
    # We only need valid students_data, i.e. from filled rows.
    """there is no further information what we should do with the information"""
    current_working_dir = Path(os.path.abspath(__file__)).parent
    with open(os.path.join(current_working_dir, "students_data.csv"), "r") as source:
        reader = csv.reader(source)
        for student, result in reader:
            if not all([student, result]):
                continue
            print([student, result])


get_students_data()
