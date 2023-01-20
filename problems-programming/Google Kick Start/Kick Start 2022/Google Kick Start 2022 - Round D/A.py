def res(a):
    if 1<=a<=100:
        for i in range(a):
            b, c = map(int, input().split())
            d = list(map(int, input().split()))
            e = 0
            f = 0
            for k in d:
                if 1<=k<=100000:
                    test = True
            if 1<=b<=10000 and 1<=c<=10000 and 1<=c<=b and test == True:
                if c > 1:
                    if (len(d) - 1)%2 == 0:
                        for j in range(b):
                            if j+1 <= (len(d) - 2):
                                e = ((d[j] + d[j+1]) / c) + d[j+2]
                            elif j+1 >= (len(d) - 2) and j+1 != (len(d)) and len(d) != 2:
                                e = ((d[-2] + d[-1]) / c) + d[0]
                            elif j+1 == (len(d)):
                                e = ((d[0] + d[-1]) / c) + d[-2]
                            elif len(d) == 2:
                                e = (d[0] / c) + d[-1] 
                            if e > f:
                                f = e
                    elif (len(d) - 1)%2 != 0:
                        d.sort()
                        for j in range(len(d)):
                            y = d #new_list
                            f = y[j]
                            o = []
                            for q in y:
                                if q == f:
                                    continue
                                else:
                                    o.append(q)
                            o.sort()
                            f += (o[len(o)//2]) / c
                            if e > f:
                                f = e
                elif c == 1:
                    d.sort()
                    if len(d)%2 == 0:
                        f = (d[(len(d)//2)] + d[(len(d)//2)-1]) / 2
                    elif len(d)%2 != 0:
                        f = float(d[(len(d)//2)])
            return print("Case #" + str(i+1) + ": " + str(f))
a = int(input())
res(a)