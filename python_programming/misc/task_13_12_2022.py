num_of_names = input("Enter number of names")
actual_num_names = 0
while True:

    if not num_of_names.isdigit():
        num_of_names = input("Enter number of names")
    else:
        actual_num_names = int(num_of_names)
        break

counter = 0
names_list = list()
while counter < actual_num_names:
    input_names = ""

    while not input_names.isalpha():
        input_names = input(f"Enter name number {counter+1}        ")

    if len(input_names) > 1:
        names_list.append(input_names)
        counter += 1

print(sorted(names_list))
