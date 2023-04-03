
def my_fibunacci(limit):

    fibunachi_seq = [0,1]

    for el in fibunachi_seq:
        yield el

    for x in range(limit):
        result =  fibunachi_seq[-1] + fibunachi_seq[-2]
        if result >= limit:
            break
        fibunachi_seq.append( result)
        yield result



print(list(my_fibunacci(9)))


def fib(limit):
    a = 0
    b = 1
    for i in range(limit):
        yield a
        a, b = b, a + b  # Adds values together then swaps them


for x in fib(9):
    print(x)
