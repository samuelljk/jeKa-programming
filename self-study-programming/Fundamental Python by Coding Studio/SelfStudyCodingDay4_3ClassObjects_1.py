## |===== CLASS =====|
#Example:
class Person:
    nama = "Budi"
    orang = "Person"

obj = Person() #Membuat objeck dari class
print(type(obj))
print(obj.nama)
print(obj.orang)

# Blueprint
class Angka: 
    jumlah = 8 #Property

a = Angka() #Object
print(a.jumlah)
b = Angka()
print(b.jumlah)

##-- INIT
#Example:
class Person:
    def __init__(self,name, age, score):
        self.name = name
        self.age = age
        self.score = score

p1 = Person("Budi", 20, 100) #SELF
p2 = Person("Cecep", 17, 80)

print(p1.age)
print(p1.name)
print(p1.score)
print(p2.age)
print(p2.name)
print(p2.score)

        