# LATIHAN LOGIKA DAN KOMPARASI

# Membuat gabungan area rentang dari angka

# ++++++3--------10++++++

inputUser = float(input("Masukan angka yang bernilai\nkurang dari 3 \natau \nlebih dari 10\n: "))

# ++++++3----------------
# Memeriksa angka kurang dari 3
isKurangDari = (inputUser < 3)
print("Kurang dari 3 = ",isKurangDari)

#----------------10++++++
# Memeriksa angka lebih dari 10
isLebihDari = (inputUser > 10)
print("Lebih dari 10 = ", isLebihDari)

isCorrect = isKurangDari or isLebihDari
print("Angka yang anda masukkan : ", isCorrect)

# ------3++++++10------
# IRISAN
print("\n",10*"~","\n")
inputUser = float(input("Masukan angka yang bernilai\nlebih dari 3 \ndan \nkurang dari 10\n: "))

# +++++++++++++10------
isKurangDari = (inputUser < 10)
print("Kurang dari 10 = ",isKurangDari)

# ------3++++++++++++++
isLebihDari = (inputUser > 3)
print("Lebih dari 3 = ", isLebihDari)


# ------3++++++10------
#isCorrect = 3>inputUser>10
isCorrect = isKurangDari and isLebihDari
print("Angka yang anda masukkan : ", isCorrect)

'''
    1. -----0+++++5-----8+++++11-----
    2. +++++0-----5+++++8-----11+++++
'''