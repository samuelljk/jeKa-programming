# a = [1, 5, 2, 4, 4, 2, 6, 7, 9]
# a.sort()
# a.reverse()
# print(a)
# print(a[3])

a, b = map(int, input().split(' '))
c = input()
d = c.split(' ')
e = int(d[b-1])
ans = 0
for i in d:
    if int(i) >= e and int(i)!=0:
        ans += 1

print(ans)