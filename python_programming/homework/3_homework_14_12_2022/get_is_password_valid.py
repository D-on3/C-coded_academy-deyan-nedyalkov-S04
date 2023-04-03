import re


def get_is_password_valid(password):
    # Ask for user's password.
    # Check user's password against the following conditions:
    # At least 6 symbols, and maximum of 32 symbols.
    # At least 1 upper case letter.
    # At least 1 symbol.
    # hint: use the re library.
    reg = r"^.*(?=.{6,32})(?=.*\d)(?=.*[a-z])(?=.*[A-Z])(?=.*[\W]).*$"

    if re.match(reg, password):  # Check if regex is correct
        print(f"Password {password} is valid password")
        return True
    print(f"Password {password} not valid password")
    return False


usr_input = input("Enter password: ")
get_is_password_valid(usr_input)
