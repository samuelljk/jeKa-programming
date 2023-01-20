n, x, y, z = map(int, input().split())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
list1 = a
list1.sort()
list1.reverse()
res = []
while x > 0:
    for i in range(len(list1)):
        if list1[i] == a[i]:
            a[i] = 0
            b[i] = 0
            res.append(i+1)
            x -= 1
list2 = b
list2.sort()
list2.reverse()
while y > 0:
    for j in range(len(list2)):
        if list2[j] == b[j]:
            a[j] = 0
            b[j] = 0
            res.append(j+1)
            y -= 1
list3 = []
for k in range(len(b)):
    list3.append(a[k] + b[k])
list4 = list3
list4.sort()
list4.reverse()
while z > 0:
    for l in range(len(list4)):
        if list4[l] == list3[l]:
            a[l] = 0
            b[l] = 0
            res.append(l+1)
            z -= 1
for m in res:
    print(m)