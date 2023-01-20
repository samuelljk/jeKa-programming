res = 0
a, b = map(int, input().split())
c = list(map(int, input().split()))
c.sort()
c.reverse()
for i in range(a+1):
    for k in range(2, 12):
        if (c[i]>=(b/k) and a>=k):
            res += 1
            a -= k

print(a)