a = int(input())

for i in range(a):
    b, c = map(int, input().split(' '))
    if b > c:
        print(c)
    elif c > b:
        print(b)
    elif b == c:
        print(b)