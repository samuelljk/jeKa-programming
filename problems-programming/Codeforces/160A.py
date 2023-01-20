a = int(input())
b = list(map(int, input().split()))
b.sort()
b.reverse()
total = 0
for i in b:
    total += i
x = 0
count = 0
for j in b:
    x += j 
    count += 1
    if x > total//2:
        print(count)
        break