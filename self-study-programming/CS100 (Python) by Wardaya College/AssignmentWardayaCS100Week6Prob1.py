print("|=== Terdapat Ekspresi Aritmatika (a#b=c) ===|")

nilai_a = int(input("Masukkan Nilai a: "))
nilai_b = int(input("Masukkan Nilai b: "))
nilai_c = int(input("Masukkan Nilai c: "))

def eks_arit(nilai_a, nilai_b, nilai_c):
    if nilai_a+nilai_b == nilai_c:
        print("Kita bisa mengganti '#' dengan + untuk mendapatkan", str(nilai_a)+'+'+str(nilai_b)+'='+str(nilai_c), "TRUE!")
    elif nilai_a-nilai_b == nilai_c:
        print("Kita bisa mengganti '#' dengan - untuk mendapatkan", str(nilai_a)+'-'+str(nilai_b)+'='+str(nilai_c), "TRUE!")
    elif nilai_a*nilai_b == nilai_c:
        print("Kita bisa mengganti '#' dengan x untuk mendapatkan", str(nilai_a)+'x'+str(nilai_b)+'='+str(nilai_c), "TRUE!")
    elif nilai_a/nilai_b == nilai_c:
        print("Kita bisa mengganti '#' dengan / untuk mendapatkan", str(nilai_a)+'/'+str(nilai_b)+'='+str(nilai_c), "TRUE!")
    else:
        print("Kita tidak bisa mengganti '#' dengan + - x / untuk menyelesaikan a#b=c. FALSE!")

eks_arit(nilai_a, nilai_b, nilai_c)