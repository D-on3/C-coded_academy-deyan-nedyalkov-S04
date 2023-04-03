from functools import wraps




def detect_slipage():
    print("slipage detected")


def activate_ABS(func):
    @wraps(func)
    def wrapper():
        detect_slipage()
        func()

    return wrapper



@activate_ABS
def engage_brakes():
    print("you are lowering your speed be careful")


