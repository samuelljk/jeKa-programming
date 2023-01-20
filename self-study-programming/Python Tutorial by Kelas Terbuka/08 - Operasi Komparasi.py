# OPERASI KOMPARASI

# Setiap hasil dari OPERASI KOMPARASI adalh BOOLEAN

# >,<,>=,<=,==,!=,is,is not

a = 4
b = 2

# Lebih Besar Dari >
print("|====== LEBIH DARI (>)")
hasil = a > 3
print(a,'>',3,'=',hasil)
hasil = b > 3
print(b,'>',3,'=',hasil)
hasil = b > 2
print(b,'>',2,'=',hasil)

# Kurang Dari <
print("|====== KURANG DARI (<)")
hasil = a < 3
print(a,'<',3,'=',hasil)
hasil = b < 3
print(b,'<',3,'=',hasil)
hasil = b < 2
print(b,'<',2,'=',hasil)

# Lebih Dari Sama Dengan (>=)
print("|====== LEBIH DARI SAMA DENGAN (>=)")
hasil = a >= 3
print(a,'>=',3,'=',hasil)
hasil = b >= 3
print(b,'>=',3,'=',hasil)
hasil = b >= 2
print(b,'>=',2,'=',hasil)

# Kurang Dari Sama Dengan (<=)
print("|====== KURANG DARI SAMA DENGAN (<=)")
hasil = a <= 3
print(a,'<=',3,'=',hasil)
hasil = b <= 3
print(b,'<=',3,'=',hasil)
hasil = b <= 2
print(b,'<=',2,'=',hasil)

# Sama Dengan (==)
print("|====== SAMA DENGAN (==)")
hasil = a == 3
print(a,'==',3,'=',hasil)
hasil = b == 3
print(b,'==',3,'=',hasil)
hasil = b == 2
print(b,'==',2,'=',hasil)

# Tidak Sama Dengan (!=)
print("|====== TIDAK SAMA DENGAN (!=)")
hasil = a != 3
print(a,'!=',3,'=',hasil)
hasil = b != 3
print(b,'!=',3,'=',hasil)
hasil = b != 2
print(b,'!=',2,'=',hasil)

# 'IS' sebagai komparasi object identity
print("|====== OBJECT IDENTITY (is)")
x = 5 # ini adalah assignment membuat object
y = 5
print('nilai x = ',x, 'id = ', hex(id(x)))
print('nilai y = ',y, 'id = ', hex(id(y)))
hasil = x is y
print('x is y = ', hasil)

x = 5 # ini adalah assignment membuat object
y = 6
print('nilai x = ',x, 'id = ', hex(id(x)))
print('nilai y = ',y, 'id = ', hex(id(y)))
hasil = x is y
print('x is y = ', hasil)

# 'IS NOT' sebagai komparasi object identity
print("|====== OBJECT IDENTITY (is not)")
x = 5 # ini adalah assignment membuat object
y = 5
print('nilai x = ',x, 'id = ', hex(id(x)))
print('nilai y = ',y, 'id = ', hex(id(y)))
hasil = x is not y
print('x is not y = ', hasil)

x = 5 # ini adalah assignment membuat object
y = 6
print('nilai x = ',x, 'id = ', hex(id(x)))
print('nilai y = ',y, 'id = ', hex(id(y)))
hasil = x is not y
print('x is not y = ', hasil)