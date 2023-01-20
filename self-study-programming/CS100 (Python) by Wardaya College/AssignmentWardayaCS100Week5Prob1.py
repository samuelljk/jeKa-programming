## |=== Assignment Week-5 Part 1 ===|

import random
number_random = int(random.randint(1, 100))
print("--- Bilangan:", number_random)
number_input = int(input("Masukkan sebuah bilangan: "))
selisih = number_random-number_input or number_input-number_random

while number_random!=number_input and selisih!=0:
    if 1<=selisih<=20 and number_random>number_input:
        print("Sedikit lagi, bilangan lebih besar daripada yang anda tebak!")
    elif selisih>20 and number_random>number_input:
        print("Masih jauh, bilangan lebih besar daripada yang anda tebak!")
    elif 1<=selisih<=20 and number_input>number_random:
        print("Sedikit lagi, bilangan lebih kecil daripada yang anda tebak!")
    elif selisih>20 and number_input>number_random:
        print("Masih jauh, bilangan lebih kecil daripada yang anda tebak!")
    number_input = int(input("Masukkan sebuah bilangan: "))
print("Selamat, anda benar! Bilangan tersebut adalah", number_random)