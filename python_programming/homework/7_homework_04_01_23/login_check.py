from functools import wraps

"""
 Decorators 
 2. Write decorator login_required that would be used to check if a user is logged, and if not,
    it should print out "Login required", and if user is logged, the decorated function should print
    "Welcome"
 """


def login_required(func):
    @wraps(func)
    def wrapper(**kwargs):
        usr, logged = kwargs.values()

        if logged == False:  # No good practise to use [1]
            print("Login required")  # return and print together is not good practice
        else:
            print(f"Welcome {usr}")  # same, try with items, values and etc.
        func(kwargs)

    return wrapper


@login_required
def check_credentials(credentials):  # is credentials is dictionary?
    """Function that print credentials
    :param credentials =  kwargs
    :return None
    """
    print(credentials)


person1 = {"name": "User name", "logged": True}
person2 = {"name": "User name", "logged": False}
check_credentials(**person1)
check_credentials(**person2)
