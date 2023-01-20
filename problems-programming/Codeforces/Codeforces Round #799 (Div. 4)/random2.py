a = input()

for i in a:
    if i in "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" and i!=' ':
        x = 1

if 1<=len(a)<=100 and type(a)==str and x == 1:
    b = ""
    for j in a:
        if j == "a" or j == "i" or j == "u" or j == "e" or j == "o" or j == "A" or j == "I" or j == "U" or j == "E" or j == "O" or j == "y" or j == "Y":
            continue
        else:
            b += '.'+j

c = b.lower()
print(c)