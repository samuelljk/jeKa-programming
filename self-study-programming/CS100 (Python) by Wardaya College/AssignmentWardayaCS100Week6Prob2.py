nilai_min1 = int(input("Masukkan biaya menit pertama: "))
nilai_min2_10 = int(input("Masukkan biaya menit 2-10: "))
nilai_min11 = int(input("Masukkan biaya menit sebelas: "))
nilai_X = int(input("Masukkan jumlah pulsa: "))
panjang_menit = 0
# min2_10 = 9*nilai_min2_10


print("Loading...")

def phcase(nilai_min1, nilai_min2_10, nilai_min11, nilai_X, panjang_menit):
    while nilai_X >= 0:
        if nilai_X-nilai_min1 >= 0:
            panjang_menit += 1
        elif nilai_X - nilai_min2_10 >= 0:
            for i in range(0,10,1):
                if nilai_X - nilai_min2_10 >= 0:
                    panjang_menit += 1
                else:
                    panjang_menit += 0
        elif nilai_X-nilai_min11 >= 0:
            panjang_menit += 1
    print("Durasi telpon yang bisa dilakukan adalah", panjang_menit)
        

phcase(nilai_min1, nilai_min2_10, nilai_min11, nilai_X, panjang_menit)