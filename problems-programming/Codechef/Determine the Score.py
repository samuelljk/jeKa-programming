a = int(input())

for i in range(a):
    b, c = map(int, input().split(' '))
    if b > c:
        print(b)
    elif c > b:
        print(c)
    elif b == c:
        print(b)