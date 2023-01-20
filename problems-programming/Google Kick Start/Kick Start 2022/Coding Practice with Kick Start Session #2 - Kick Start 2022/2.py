a = int(input())
if 1<=a<=100:
    for i in range(a):
        b, c = map(int, input().split())
        d = str(input())
        count = 0
        for j in range(c):
            test = ''
            x1, x2 = map(int, input().split())
            test += d[x1-1:x2]
            check = ''
            check2 = ''
            div = 0
            if 1<=x1<=x2<=b:
                for k in test:
                    if k not in check:
                        check += k
                        div += 1
                    elif k in check:
                        check2 += k
                res_bool = True
                res_bool2 = True
                for l in check2:
                    x = check2.count(l)
                    if x >= 3:
                        res_bool = False
                    elif x >= 2:
                        res_bool2 = False
                if len(test)%2!=0:
                    if div<=(len(test)//2)+1 and res_bool != False: #sukses
                        count += 1
                elif len(test)%2==0:
                    if div<=(len(test)//2) and res_bool2 != False: #sukses
                        count += 1
        print('Case #' + str(i+1) + ': ' + str(count))