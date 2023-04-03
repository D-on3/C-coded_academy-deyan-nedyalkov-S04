def reverse_string(string):
    # Add code that would return reversed string
    # Do not use slice notation or reverse()
    reversed_string = ""
    for idx_char in range(len(string) - 1, -1, -1):
        reversed_string += string[idx_char]
    return reversed_string


# Well done!
print(reverse_string("Something diffrent in this pot of grey!"))
