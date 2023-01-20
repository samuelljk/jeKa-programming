# P1 1 1 0 
# P2 1 1 1
# P3 1 0 0
#    P V A

a = int(input())

ans = 0
for i in range(a):
    a, b, c = map(int, input().split(' '))
    if a + b + c > 1:
        ans += 1
    else:
        ans += 0

print(ans)
