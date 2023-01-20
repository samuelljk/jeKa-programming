# OPERATOR ASSIGNMENT
# Operasi yang dapat dilakukan dengan penyingkatan
# Operator ditambah dengan assignment

a = 5 # INI ADALAH ASSIGNMENT
print("Nilai a =",a)

a += 1 # ARTINYA adalah a = a + 1
print("Nilai a += 1, maka nilai a menjadi",a)
a -= 2 # ARTINYA adalah a = a - 2
print("Nilai a -= 2, maka nilai a menjadi",a)
a *= 5 # ARTINYA adalah a = a * 5
print("Nilai a *= 5, maka nilai a menjadi",a)
a /= 2 # ARTINYA adalah a = a / 2
print("Nilai a /= 2, maka nilai a menjadi",a)
b = 10
print("\n Nilai B =",b)

# Modulus dan Floor Division
b %= 3
print("Nilai b %= 3, maka nilai b menjadi",b)
b = 10
print("\n Nilai B =",b)
b //= 3
print("Nilai b //= 3, maka nilai b menjadi",b)
a = 5
print("Nilai a =",a)

# Pangkat (Eksponen)
a **= 3
print("Nilai a **= 3, maka nilai a menjadi",a)

# OPERASI BITWISE
# OR (|)
c = True
print('\n Nilai c =', c)
c |= False
print("Nilai c |= False, maka nilai c menjadi",c)
c = False
print('\n Nilai c =', c)
c |= False
print("Nilai c |= False, maka nilai c menjadi",c)

# AND (&)
c = True
print('\n Nilai c =', c)
c &= False
print("Nilai c &= False, maka nilai c menjadi",c)
c = False
print('\n Nilai c =', c)
c &= False
print("Nilai c &= False, maka nilai c menjadi",c)
c = True
print('\n Nilai c =', c)
c &= True
print("Nilai c &= True, maka nilai c menjadi",c)

# XOR (^)
c = True
print('\n Nilai c =', c)
c ^= False
print("Nilai c ^= False, maka nilai c menjadi",c)
c = False
print('\n Nilai c =', c)
c ^= False
print("Nilai c ^= False, maka nilai c menjadi",c)
c = True
print('\n Nilai c =', c)
c ^= True
print("Nilai c ^= True, maka nilai c menjadi",c)

# >> <<
d = 0b0100
print('\n Nilai d =',format(d,'04b'))
d >>= 2
print("Nilai d >>= 2, maka nilai d menjadi",format(d,'04b'))
d <<= 1
print("Nilai d <<= 1, maka nilai d menjadi",format(d,'04b'))