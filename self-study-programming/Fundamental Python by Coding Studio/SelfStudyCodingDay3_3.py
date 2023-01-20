# LOOPING
for i in range(4): #(start 0, stop 4, step 1) DEFAULT PARAMETER
    print("Looping!")

# 1. For
for i in range(5, 26, 5): #(start, stop, step)
    print(i)

# 2. For-Break
for i in range(10,20,3):
    if i == 19:
        break #Stop

    print(i)

for i in range(0,52,3):
    if i == 21:
        break #Stop
    
    print(i)

# 3. For-Continue
for i in range(10,20,3):
    if i == 13:
        continue #Dilongkap

    print(i)

for i in range(1,11,2):
    print(i)
#ATAU
for i in range(1, 11):
    if i%2==0:
        continue

    print(i)
#ATAU
for i in range(1,11):
    if i%2!=0:
        print(i)

# 4. While
nilai = 50

while(nilai<70):
    print("Nilai Sekarang: " + str(nilai))
    nilai += 5

uang = 100

while(uang>0):
    print("Masih Punya Uang: " + str(uang))
    uang-=10
print("Uang Sudah Habis!")