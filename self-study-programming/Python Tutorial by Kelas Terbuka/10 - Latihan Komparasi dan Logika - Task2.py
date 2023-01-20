'''
    1. -----0+++++5-----8+++++11-----
    2. +++++0-----5+++++8-----11+++++
'''

inputUser = float(input("2.1 Masukkan angka yang\nkurang dari 0\n: "))
isKurangDariSatu = inputUser < 0
print("Angka kurang dari 0 ", isKurangDariSatu)
isCorrectSatu = isKurangDariSatu

inputUser = float(input("2.2 Masukkan angka\nlebih dari 5\ndan\nkurang dari 8\n: "))
isLebihDariDua = inputUser > 5
print("Angka lebih dari 5 ", isLebihDariDua)
isKurangDariDua = inputUser < 8
print("Angka kurang dari 8 ", isKurangDariDua)
isCorrectDua = isLebihDariDua and isKurangDariDua
print("Angkat yang dimasukkan ", isCorrectDua)

inputUser = float(input("2.3 Masukkan angka yang\nlebih dari 11\n: "))
isLebihDariTiga = inputUser > 11
print("Angka lebih dari 11 ", isLebihDariTiga)
isCorrectTiga = isLebihDariTiga
print("Angka yang dimasukan ", isCorrectTiga)

print("\n",5*"=",10*"~",5*"=","\n")

isCorrectLast = isCorrectSatu and isCorrectDua and isCorrectTiga
print("Jawaban Soal 2. ", isCorrectLast)

#isCorrect = isCorrectSatu and isCorrectDua
#print("Jawaban Soal 1. ", isCorrect)