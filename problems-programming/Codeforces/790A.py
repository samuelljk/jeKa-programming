a = int(input())
for i in range(a):
    b = str(input())
    c = 0
    d = 0
    for j in b[0:3]:
        c += int(j)
    for k in b[3:6]:
        d += int(k)
    if c == d:
        print('YES')
    else:
        print('NO')