# --- STRING
NIM = "1214221412" # String bisa " "
Nama = 'Budi' # Bisa juga ' '
print(Nama + " memiliki NIM " + NIM)

print("\"Selamat datang di Coding Studio!\"") # Escape Character
print("Selamat datang di \"Coding Studio!\"") # Escape Character

## String Methods
text = "coding studio"
print(text.upper())
print(text.lower())
print(len(text))
print(text.split(' '))
print(text.capitalize())
print(text.index('s')) # c(0) o(1) d(2) i(3) n(4) g(5) SPACE(6) etc .. START from 0

texts = "Belajar Python"
print(texts.upper())
print(texts.split(' '))
print(texts.index('a')) # 2 char 'a', namun paling pertama yang diprint

print(texts[1])
print(texts[2:])
print(texts[:4]) # ke-4 tdk diprint
print(texts[3:5])
print(texts[:])
print(texts[-2])
print(texts[:-2])

## String Concatenation
x = "Coding"
y = "Studio"

print(x+y)
print(x + " " + y)
print(x + " " + y + " " + str(12345))

## String Format
nama = "Cecep"
umur = 20
teks = "{} berumur {} tahun."

print(teks.format(nama,umur))

mangga = 5
apel = 7
pisang = 4
teks1 = "Cecep membeli {} mangga, {} apel, dan {} pisang."
print(teks1.format(mangga, apel, pisang))

## In vs Not In
kalimat = "Coding Studio"
print("Studio" in kalimat) # Output = True
print("Anjay" in kalimat) # Output = False
