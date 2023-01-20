# --- ARITHMETIC OPERATOR
angka1 = 5
angka2 = 3

print("Hasil penjumlahan:", angka1 + angka2)
print("Hasil penjumlahan: " + str(angka1+angka2))
print(angka1%angka2)
print(2**3)
print(angka1/angka2)
print(angka1//angka2)

angka1 = angka1 + 5
angka1 += 5 ## += -= *= /= //= etc
print("Angka: " + str(angka1))

# --- MATH
import math

# Using methods
print(math.pow(2, 3)) ## Pangkat
print(math.ceil(3.2)) ## Membulatkan ke atas "math.floor(3.2)" -> ke bawah
print(math.sqrt(25)) ## Akar, sqrt=square root

# Using constants
print(math.pi)

angka = 4
print(math.sqrt(angka)) # Return sqrt itu FLOAT
