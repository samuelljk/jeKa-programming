# Operasi Aritmatika

a = 10
b = 3

# TAMBAH +
hasil = a + b
print(a, '+', b, '=', hasil)

# KURANG -
hasil = a - b
print(a, '-', b, '=', hasil)

# KALI x
hasil = a * b
print(a, 'x', b, '=', hasil)

# BAGI /
hasil = a / b
print(a, '/', b, '=', hasil)

# EKSPONEN (Pangkat)
hasil = a ** b
print(a, '**', b, '=', hasil)

# MODULUS (Sisa Pembagian)
hasil = a % b
print(a, '%', b, '=', hasil)

# FLOOR DIVISION // (Kebalikan MODULUS)
hasil = a // b
print(a, '//', b, '=', hasil)

# PRIORITAS OPERASI / OPERATIONAL PRECEDENCE

x = 3
y = 2
z = 4

# Kurung Akang di PRIORITASKAN
hasil = x ** y * (z + x) / y - y % z // x
print(x,'**',y,'* (',z,'+',x,') /',y,'-',y,'%',z,'//',x,'=', hasil)

hasil = (x + y) * z
print('(',x,'+',y,') *',z,'=',hasil)

'''
    1. ()
    2. EKSPONEN **
    3. Perkalian, dkk * / // %
    4. Pertambahan, dkk + -
'''