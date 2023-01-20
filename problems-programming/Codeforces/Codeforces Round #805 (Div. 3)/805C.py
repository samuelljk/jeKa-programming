a = int(input())
if 1<=a<=10000:
    for i in range(a):
        empty = str(input())
        b, c = map(int, input().split())
        d = list(map(int, input().split()))
        if 1<=b<=200000 and 1<=c<=200000:
            for j in range(c):
                x, y = map(int, input().split())
                tag = 0
                tag2 = 0
                tag3 = ''
                for k in d:
                    if k == x and str(k) not in tag3:
                        tag += 1
                        tag3 += str(k)
                    elif k == y and tag == 1:
                        print('YES')
                        tag2 += 1
                        break
                if tag2 == 0:
                    print('NO') 