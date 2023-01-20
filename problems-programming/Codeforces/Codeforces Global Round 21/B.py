a = int(input())

if 1<=a<=10**4:
    for i in range(a):
        b = int(input())
        if 1<=b<=10**5:
            c = str(input())
            d = c.split(' ')
            res = 0
            length = len(d)
            index = 0
            for j in d:
                index += 1
                if int(j)>0 and res==0 and 0<=int(j)<=10**9:
                    res+=1
                elif int(j)==0 and res>0 and index!=length and 0<=int(j)<=10**9:
                    res+=1
            print(res)
