for i in range(1,6):
    print('*'*i)

uangKita = float(input("Jumlah Uang: "))

while uangKita < 1000000:
    print("Kurang! Nabung Lagi Boss!")
    uangTambahan = float(input("Nabung: "))
    uangKita += uangTambahan
    print(uangKita)
else:
    print("Mantap, OTW Beli Laptop Baru") 


