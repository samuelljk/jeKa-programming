a = int(input())
for i in range(a):
    b, c = map(int, input().split(' '))
    d = list(map(int, input().split()))
    total = 0
    for j in d:
        total += j
    print("Case #" + str(i+1) + ": " + str(total % c))

# a = int(input())
# for i in range(a):
#     c = list(map(int, input().split()))
#     print(c)