a = str(input())
c0 = 0
c1 = 0
x = 0
for i in a:
    if i == '0' and c1 < 7 and c1 != 7:
        c0 += 1
        c1 *= 0
    elif i == '1' and c0 < 7 and c0 != 7:
        c1 += 1
        c0 *= 0
    elif c0 == 7 or c1 == 7:
        break
# print("C1 = " + str(c1) + "& C0 = " + str(c0))
if c1 >= 7 or c0 >= 7:
    print('YES')
else:
    print('NO')