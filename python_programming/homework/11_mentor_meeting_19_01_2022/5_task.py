
def monotonic_check(list_to_check=[6, 5, 4, 4]):
    # 5. Write a program that check given an array of integers is monotonic or not.
    # A = [6, 5, 4, 4]
    # B = [1, 1, 1, 3, 3, 4, 3, 2, 4, 2]
    # C = [1, 1, 2, 3, 7]
    # Output:
    # True
    # False
    # True
    member_a, member_b = [], []
    current_list = list_to_check
    member_a.extend(current_list)
    member_b.extend(current_list)
    member_a.sort()
    member_b.sort(reverse=True)
    if (member_a == current_list or member_b == current_list):
        return True
    return False


print(monotonic_check())