a, b, c = map(int, input().split())
price = 0
for i in range(c+1):
    price += i*a
if b - price < 0:
    print((b-price)*-1)
elif b - price >= 0:
    print(0)