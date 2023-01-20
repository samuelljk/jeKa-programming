a = int(input())
for i in range(a):
    b = str(input())
    if b == "yes" or b == "Yes" or b == "yEs" or b == "yeS":
        print('YES')
    elif b == "YEs" or b == "yES" or b == "YeS" or b == "YES":
        print('YES')
    else:
        print('NO')
