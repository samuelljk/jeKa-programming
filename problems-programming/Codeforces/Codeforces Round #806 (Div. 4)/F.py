from sys import stdin, stdout
a = int(stdin.readline())
if 1<=a<=1000:
    while a > 0:
        b = int(stdin.readline())
        c = list(map(int, stdin.readline().split()))
        index = 0
        count = 0
        for j in c:
            index += 1
            index2 = 0
            for k in c:
                index2 += 1
                if j < index < k < index2:
                    count += 1
                else:
                    count += 0
        stdout.write(str(count) + "\n")
        a -= 1