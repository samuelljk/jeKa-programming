a = int(input())
count = 0
while a > 0:
    if a - 5 >= 0:
        a -= 5
        count += 1
    elif a - 4 >= 0:
        a -= 4
        count += 1
    elif a - 3 >= 0:
        a -= 3
        count += 1
    elif a - 2 >= 0:
        a -= 2
        count += 1
    elif a - 1 >= 0:
        a -= 1
        count += 1
print(count)