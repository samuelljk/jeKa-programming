a = int(input())

if 1<=a<=150:
    res = 0
    for i in range(a):
        b = str(input())
        if '++' in b:
            res += 1
        elif '--' in b:
            res -= 1
    print(res)