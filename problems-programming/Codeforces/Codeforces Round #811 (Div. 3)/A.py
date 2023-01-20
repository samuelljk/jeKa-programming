def carakerja(hi, mi, M, H, lastH, lastM, resH, resM):
    lastH, lastM = hi, mi
    if lastM >= 0:
        resM = 60 - M
        if lastH < H:
            resH = 24 - H + lastH
        elif lastH > H:
            resH = lastH - H - 1
    if lastM > 0:
        resH -= 1
        resM += lastM
    result = str(resH) + " " + str(resM)
    return result
t = int(input())
if 1<=t<=100:
    for i in range(t):
        n, H, M = map(int, input().split())
        resH, resM, lastH, lastM = 0, 0, 0, 0
        if 1<=n<=10:
            for j in range(n):
                hi, mi = map(int, input().split())
                if hi == H and mi == M:
                    lastH, lastM = hi, mi
                    resH, resM = 0, 0
                    res = str(resH) + " " + str(resM)
                    break
                elif hi <= lastH and lastH != 0: #jika H sama dan hi not > H
                    res = carakerja(hi, mi, M, H, lastH, lastM, resH, resM)
                elif lastH == 0:
                    res = carakerja(hi, mi, M, H, lastH, lastM, resH, resM)
            print(res)
                