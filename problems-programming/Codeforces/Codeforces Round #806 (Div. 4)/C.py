# D: Naik
# U: Turun
a = int(input())
for i in range(a):
    b = int(input())
    c = list(map(int, input().split()))
    not_ans = []
    for j in range(len(c)):
        inp = str(input())
        inp2 = inp.split(' ')
        inp2.pop(0)
        samplestr = ''
        for x in inp2:
            samplestr += x
        for k in samplestr:
            if k == "D":
                if c[j] == 9:
                    c[j] = 0
                else:
                    c[j] += 1
            elif k == "U":
                if c[j] == 0:
                    c[j] = 9
                else:
                    c[j] -= 1
        not_ans.append(str(c[j]))
    ans = ''
    for l in not_ans:
        xy = l + ' '
        ans += xy
    print(ans[:-1])
        
