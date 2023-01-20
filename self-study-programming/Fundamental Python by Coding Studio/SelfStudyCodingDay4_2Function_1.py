## Function = kumpulan baris code yang bisa digunakan kembali
## Built-in function (print, len, type)

#Syntax:
#Function name = Nama function
#Argument = Nilai yang diberikan
#Function body = Isi function
#Return = Hasil yang dikembalikan

#Example:
def greet():
    print("Hello, Stranger!")
    print("Nice to meet you!")

greet()
greet()

def greet(name, age):
    print("Hello!", name)
    print("Age:", str(age))

#Argument ("Nama", umur)
greet("Samuel", 20)
greet("Budi", 10)
greet("Cecep", 1)

greet(age=20, name="Cecep") #Bisa juga seperti ini