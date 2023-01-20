a = 10
b = 5
if a != b:
    print("A tidak sama dengan B")

if a > b:
    print("A lebih besar dari B")
else:
    print("A tidak lebih besar dari B")

if a > b:
    print("A lebih besar dari B")
elif a == b:
    print("A sama dengan B")
else:
    print("B lebih besar dari A")

#######

x = 30
y = 15
z = 20

if x == y: #False
    print("X sama dengan Y")

if x < y:
    print("X kurang dari Y")

if x > y and z < y: #True and False = False
    print("X lebih besar dari Y")
else:
    print("X tidak lebih besar dari Y")

if x > y:
    print("X lebih besar dari Y")
elif x < y:
    print("X lebih kecil dari Y")
elif z > y:
    print("Z lebih besar dari Y")
else:
    print("Semua kondisi di atas salah")