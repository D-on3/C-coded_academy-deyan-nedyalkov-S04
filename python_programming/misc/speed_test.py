from datetime import datetime

var1 = datetime.now()

listsss = []
for x in range(1, 30_000):
    listsss.append(x)


print(listsss)


var2 = datetime.now()

print([x for x in range(1, 30_000)])

var3 = datetime.now()

print(f"{var1}\n{var2}\n{var3}")
