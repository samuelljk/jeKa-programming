class Person:
    def __init__(self,name, age, score):
        self.name = name
        self.age = age
        self.score = score

    def greet(self):
        print("Halo", self.name + "!")

p1 = Person("Budi", 20, 100) #SELF
p2 = Person("Cecep", 17, 80)

# print(p1.age)
# print(p1.name)
# print(p1.score)
# print(p1.__dict__)

# print(p2.age)
# print(p2.name)
# print(p2.score)
# print(p2.__dict__)

p1.greet()
p2.greet()

class Animal: # PARENT CLASS
    def __init__(self, name, age):
        self.name = name
        self.age = age

class Cat(Animal): # CHILD CLASS
    def __init__(self, name, age, color, weight):
        super().__init__(name,age)
        self.color = color
        self.weight = weight

class Dog(Animal): # CHILD CLASS
    def __init__(self, name, age, type):
        super().__init__(name, age)
        self.type = type
