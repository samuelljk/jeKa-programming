### VARIABEL DAN  TIPE DATA
angka = 5 # Integer
angka_berkoma = 3.85 # Float
nama = "Samuel" # String

print(angka)
print(angka_berkoma)
print("Nama saya adalah: " + nama)
print("Nama saya adalah:",nama)
angka = str(angka) ## Cara Pertama
angka_berkoma = str(angka_berkoma)
print(angka + " " + angka_berkoma)
print(str(angka) + " " + str(angka_berkoma)) ## Cara Kedua

### INPUT DAN OUTPUT
nama_lengkap = input("Nama Lengkap: ")
print("Selamat Datang,", nama_lengkap + "!")