a = int(input())
for i in range(a):
    b = str(input())
    if len(b)>10:
        c = b[0] + str(len(b)-2) + b[-1]
        print(c)
    else:
        print(b)