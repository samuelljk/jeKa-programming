a = int(input())

for i in range(a):
    a, b, c, d = map(int, input().split(' '))
    if b > a and c > a and d > a:
        x = 3
        print(x)
    elif b > a and c > a or b > a and d > a or c > a and d > a:
        x = 2
        print(x)
    elif b > a or c > a or d > a:
        x = 1
        print(x)
    elif a > b and a > c and a > d:
        x = 0
        print(x)