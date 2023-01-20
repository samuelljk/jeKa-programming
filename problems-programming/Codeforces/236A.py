from re import I


a = str(input())

count = 0
x = ''
for i in a:
    if i not in x:
        x += i
        count += 1

if count%2==0:
    print("CHAT WITH HER!")
else:
    print("IGNORE HIM!")