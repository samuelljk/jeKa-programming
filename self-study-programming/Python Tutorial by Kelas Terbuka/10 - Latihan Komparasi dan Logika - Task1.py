'''
    1. -----0+++++5-----8+++++11-----
    2. +++++0-----5+++++8-----11+++++
'''

inputUser = float(input("1.1 Masukkan angka\nlebih dari 0\ndan\nkurang dari 5\n: "))

isLebihDariSatu = inputUser>0
print("Lebih dari 0 adalah ", isLebihDariSatu)
isKurangDariSatu = inputUser<5
print("Kurang dari 5 adalah ", isKurangDariSatu)
isCorrectSatu = isLebihDariSatu and isKurangDariSatu
print("Angka yang dimasukan ", isCorrectSatu)

inputUser = float(input("1.2 Masukkan angka\nlebih dari 8\ndan\nkurang dari 11\n: "))

isLebihDariDua = inputUser>8
print("Lebih dari 8 adalah ", isLebihDariDua)
isKurangDariDua = inputUser<11
print("Kurang dari 11 adalah ", isKurangDariDua)
isCorrectDua = isLebihDariDua and isKurangDariDua
print("Angka yang dimasukan ", isCorrectDua)

print("\n",5*"=",10*"~",5*"=","\n")

isCorrect = isCorrectSatu and isCorrectDua
print("Jawaban Soal 1. ", isCorrect)