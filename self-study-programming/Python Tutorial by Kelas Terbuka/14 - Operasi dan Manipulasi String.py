# OPERASI DAN MANIPULASI STRING

# 1. Menyambung String (Concatenate)
nama_pertama = "Sam"
nama_tengah = "J"
nama_akhir = "K"

nama_lengkap = nama_pertama +" "+ nama_tengah +"'"+ nama_akhir
print(nama_lengkap)

# 2. Menghitung panjang string
panjang = len(nama_lengkap)
print(panjang)

print("Panjang dari " + nama_lengkap + " = " + str(panjang))

# 3. Operator untuk String

# Mengecek apakah ada komponen char atau string di string

j = "j"
status = j in nama_lengkap
print(j + " ada di " + nama_lengkap + " = " + str(status))

J = "J"
status = J in nama_lengkap
print(J + " ada di " + nama_lengkap + " = " + str(status))

J = "j"
status = J not in nama_lengkap # Kebalikan dari IN
print(J + " tidak ada di " + nama_lengkap + " = " + str(status))

# Mengulang string
print("WK"*10)
print(15*"WK")

# Indexing (Awalan String terhitung 0)
print("Index ke-0 : " + nama_lengkap[0])
print("Index ke-1 : " + nama_lengkap[1])
print("Index ke-5 : " + nama_lengkap[5])
print("Index ke-(-1) : " + nama_lengkap[-1])
print("Index ke-(-2) : " + nama_lengkap[-2])
print("Index ke-[0:3] : " + nama_lengkap[0:3])
print("Index ke-[2:6] : " + nama_lengkap[2:6])
print("Index ke-[0,2,4,6] : " + nama_lengkap[0:6:2])

# Item paling kecil
print("Paling kecil : " + min(nama_lengkap))
# Item paling besar
print("Paling besar : " + max(nama_lengkap))

ascii_code = ord(" ")
print("ASCII code untuk spasi adalah " + str(ascii_code))
data = 117
print("Char untuk 117 adalah " + chr(data))

# 4. Operator dalam bentuk method

data = "Richard Alexandre"
jumlah = data.count("a")
print("Jumlah a pada " + data + " = " + str(jumlah))