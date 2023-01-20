a = int(input())
if 1<=a<=10000:
    for i in range(a):
        word = str(input())
        ls = []
        for j in word:
            ls.append(j)
        x = ''
        y = 0
        z = ''
        for k in ls:
            if k not in x:
                if z == '':
                    x += k
                elif z != '':
                    if k == z[-1] and x[0] == z[-1]:
                        continue
                    else:
                        x += k
            if len(x) == 3:
                y += 1
                z += x
                x = ''
            if len(x) == 1 and k == word[-1]:
                if k not in word[-4:-1] and x not in z[-3:]:
                    y += 1
        if len(x) <= 2 and y == 0:
            y += 1
        if len(word) <= 3 and y == 0 and word != ' ':
            y += 1
        if word == ' ':
            y = 0
        print(y)

# a = 'abccdefghhig'
# print(a[-3:])