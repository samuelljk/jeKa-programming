# Latihan Konversi Satuan Temperatur

# Program Konversi Celcius ke Satuan Lain

print("\nPROGRAM KONVERSI TEMPERATUR\n")

celcius = float(input('Masukan suhu dalam CELCIUS : '))
print("Suhu adalah ", celcius ,"CELCIUS")

# Reamur (4/5C)
reamur = (4/5) * celcius
print("Suhu dalam Reamur adalah ", reamur, "REAMUR")

# Fahrenheiht (3/5C+32)
fahrenheit = ((9/5) * celcius) + 32
print("Suhu dalam Fahrenheiht adalah ", fahrenheit, "FAHRENHEIT")

# Kelvin
kelvin = celcius + 273
print("Suhu dalam Kelvin adalah ", kelvin, "KELVIN")

'''
    TUGAS :
    1. Konversi Fahrenheit ke Kelvin
    2. Konversi Kelvin ke Fahrenheit
'''
