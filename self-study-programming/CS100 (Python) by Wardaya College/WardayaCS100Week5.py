#print("<===== Program Evaluasi Nilai Siswa =====>")
#nilaiSiswa = int(input("Masukan Nilai Siswa: "))

#if nilaiSiswa >= 90:
    #performance = "Excellent Performance \n"
#elif nilaiSiswa >= 80:
    #performance = "Very Good Performance \n"
#elif nilaiSiswa >= 70:
    #performance = "Good Performance \n"
#elif nilaiSiswa >= 60:
    #performance = "Average Performance \n"
#else:
    #print("Need Improvement \n")

#print(performance)

#print("Do Your Best :) \n")

#Rewing Previous Week ^^

## LOOPING
## 1. For Loop | 2. While Loop

## 1. While Loop
a = 1
n = int(input("Enter the limit: "))
while (a<= n):
    print(a)
    a += 1

## 2. For Loop
numbers = [765,23,56,89,14,78]
for i in numbers:
    print(i)

## 2.1 For Loop Range
for i in range(3,6):
    print(i)
    i = 1

## Print Karakter Satu Satu
name = input("Enter Name:")
for i in range(0,len(name)):
    #print(i)
    print(name[i])
else:
    print("Done!")