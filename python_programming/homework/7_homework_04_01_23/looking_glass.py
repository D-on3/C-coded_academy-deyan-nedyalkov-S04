import contextlib


@contextlib.contextmanager
def looking_glass(string):
    yield print(f"{string[-1::-1]}")


# Generator & decorator ***
# Define looking_glass context manager that should print out text reversed
# version while Context manager is active
some_variable = "Pesho, Gosho, Mincho"

with looking_glass(some_variable):
    print(some_variable)  # Should print out 'Pesho, Gosho, Mincho'

# # Output: ohcniM ,ohsoG ,ohseP
#
# print("Pesho, Gosho, Mincho")  # Should print out 'Pesho, Gosho, Mincho'

# Well done, Deyan! :)
