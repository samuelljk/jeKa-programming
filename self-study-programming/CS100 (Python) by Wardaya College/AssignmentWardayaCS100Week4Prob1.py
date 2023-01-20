input_tahun = int(input("Masukkan Tahun: "))

if (input_tahun%4==0 and input_tahun%100!=0 or input_tahun%400==0):
    print("Tahun", input_tahun, "merupakan tahun kabisat")
elif (input_tahun<1582):
    print("Error (Tahun sebelum 1582)")
else:
    print("Tahun", input_tahun, "bukan merupakan tahun kabisat")