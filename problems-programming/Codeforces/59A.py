a = str(input())
sample1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
sample2 = sample1.lower()
count = 0
for i in a:
    if i in sample1:
        count += 1
    else:
        count += 0
if count <= len(a)/2:
    print(a.lower())
else:
    print(a.upper())