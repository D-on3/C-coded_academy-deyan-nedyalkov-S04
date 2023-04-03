def print_student_sentence(name, age, today):
    """
    :param name:
    :param age:
    :param today:
    :return: None
    """
    # Write code that prints out a sentence like
    # <name> is aged <age>. He is a passionate learner, and he started a JD program just <today>
    print(
        f"{name} is aged {age}. He is a passionate learner, and he started a JD program just {today}"
    )


print("Output task: print_student_sentence")
print_student_sentence("Deyan", 15, [3, 3, 2023])
