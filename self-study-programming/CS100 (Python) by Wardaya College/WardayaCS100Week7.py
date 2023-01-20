a = [1, "a", 2.3, True]
b = [1,1,1,1,1]
d = [2,2,2,2,2]
for i in range(0,4):
    b.append(2)
print(b)
print(a)
c = a+b
c = 2*b
print(c)

for item in a:
    print(item)

for index in range(len(a)):
    a[index] = 1
    print(index)
print(a)

a.append('c')
print(a)
a.insert(0, 'c')
print(a)

print(b+d)
b = b + d
print(c)
b.extend(d)
print(b)

# t = [1,2,3,4,5,6,7,8]
# t[1:3]
# t[3:]
# t[:3]
# t[:]

