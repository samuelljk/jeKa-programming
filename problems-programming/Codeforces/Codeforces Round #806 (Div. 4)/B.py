a = int(input())
for i in range(a):
    b = int(input())
    c = str(input())
    empty = ''
    count = 0
    for j in c:
        if j not in empty:
            count += 2
            empty += j
        elif j in empty:
            count += 1
            empty += j
    print(count)
