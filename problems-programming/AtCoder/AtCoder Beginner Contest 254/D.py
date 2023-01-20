a = int(input())
b = 1
count = 0
if 1<=a<=2*10**5:
    for i in range(a):
        for j in range(a):
            f = str((b*(j+1))**(1/2))
            if '.0' in f and not f[-1] != '0':
                count += 1
        b += 1
    print(count)