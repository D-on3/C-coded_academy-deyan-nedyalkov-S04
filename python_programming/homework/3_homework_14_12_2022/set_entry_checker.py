import csv
import os
from pathlib import Path
import random


def print_vips(vip_list):
    print("--------------VIP GROUP--------------")
    for person, age in vip_list.items():
        print(f"{person} {age[0]}")


def print_others(person_list):
    inline_ignore = {print(person, age) for person, age in person_list.items()}


def read_from_file():
    data_from_file_vip, data_from_file_between, data_from_file_above = {}, {}, {}
    current_working_dir = Path(os.path.abspath(__file__)).parent
    name_of_file = "set_entry.csv"
    with open(os.path.join(current_working_dir, name_of_file), "r") as file:
        read = csv.reader(file)
        for person, age, status in read:

            if status == "VIP":
                data_from_file_vip[person] = [int(age), status]
            if 18 <= int(age) < 25:
                data_from_file_between[person] = int(age)
            elif int(age) >= 25:
                data_from_file_above[person] = int(age)

    return data_from_file_vip, data_from_file_between, data_from_file_above


def check_for_capacity():
    """Check is the capacity of the age limit is full
    :return bool
    """
    _from_vip, list_middle, _from_above = read_from_file()
    return True if len(list_middle) >= 10 else False


def write_to_file(name, age, status):
    current_working_dir = Path(os.path.abspath(__file__)).parent
    name_of_file = "set_entry.csv"
    with open(os.path.join(current_working_dir, name_of_file), "a+") as f:
        f.write(f"{name},{age},{status}\n")


def write_to_file_without_vip(name, age):
    with open("set_entry.csv", "a+") as f:
        f.write(f"{name},{age},None\n")


def print_final_result(data_between, data_above, data_vip):
    """Prints the final result
    :param data_between dict
    :param data_above dict
    :param data_vip dict
    :return None
    """
    print("--------------GROUP BETWEEN 18 AND 25--------------")
    print_others(data_between)
    print("--------------GROUP ABOVE 25--------------")
    print_others(data_above)
    print_vips(data_vip)


def set_entry_checker():
    # Ask for user's data: First name, age and VIP status.
    # If user's age is under 18, do not allow user to proceed
    # If user's age is between 18 - 25, allow them to stay up to 11pm
    # If group 18_25 has more than 10 users, do not allow user to enter.
    # If user is aged over 25, welcome them without any additional conditions.
    # As an output print out the users count from each group, and also print the VIPs
    # Example input: (Georgi 28, VIP) OR (Alex 25)

    usr_input = input("Enter name/age/status(optional): ").split(" ", 1)
    status = ""

    try:
        name, age = usr_input
    except ValueError:
        raise ValueError("The input cant be empty ")

    if "," in age:
        age, status = age.split(", ")

    data_vips, data_between, data_above = read_from_file()
    time = random.randint(16, 24)
    print(time)

    if int(age) < 18:
        print("You are too young get fake id!")
    elif 18 >= int(age) < 25:
        if check_for_capacity() and time < 23:
            if status:
                write_to_file(name, age, status)
            else:
                write_to_file_without_vip(name, age)

    elif int(age) >= 25:
        if status:
            write_to_file(name, age, status)
        else:
            write_to_file_without_vip(name, age)

    print_final_result(data_between, data_above, data_vips)


set_entry_checker()
