a = str(input())
if len(a) == 3:
    for i in a:
        b = a.count(i)
        if b == 1:
            print(i)
            break
        elif b == 3:
            print('-1')
            break