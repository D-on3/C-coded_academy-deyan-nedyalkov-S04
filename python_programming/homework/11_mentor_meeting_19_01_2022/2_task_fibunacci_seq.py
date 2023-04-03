list_fib = [0, 1]

def fibunacci_seq_is_given_member_in(num2):
    # A comment.
    # A comment.
    # After implemetation of this task: Write a Python program to check if
    # a given number is a Fibonacci number or not.
    # Input: 8
    # Output: True

    if list_fib[-1] >= num2 and num2 in list_fib:
        return list_fib[-1] >= num2

    list_fib.append(list_fib[-1] + list_fib[-2])

    return fibunacci_seq_is_given_member_in(num2)

"""I have no clue why this is happening"""
print(fibunacci_seq_is_given_member_in(8))
"""I have no clue why this is happening"""
"""                NONE               """


# print(fibunacci_seq_is_given_member_in(8))


def fibunacci_seq_to_given(num2):
    # 2.Write a program to find nth fibonacci number with recursion?
    # A Fibonacci series is a series in which next number is a sum of previous two numbers.
    #
    # For example : 0, 1, 1, 2, 3, 5, 8
    # First Fibonacci number is 0, second is 1, third is 2 and etc.
    # Input: fib(2)
    # Output: 1
    if len(list_fib) >= num2:
        return list_fib[-1]

    list_fib.append(list_fib[-1] + list_fib[-2])
    fibunacci_seq_to_given(num2)
    return list_fib[-1]


#
# Printing the last element of the list.
print(fibunacci_seq_to_given(5))

