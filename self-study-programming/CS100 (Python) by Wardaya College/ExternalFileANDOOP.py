## --- HANDLING EXTERNAL FILE ---
# fhand = open("demo.txt")
# print(fhand)
# for line in fhand:
#     print(line)

# fhand = open("demo.txt", "w")
# print(fhand)
# newline = "asjifhasgbausgas"
# fhand.write(newline)

## --- OOP ---
# class menu():
#     pass

# menu_item1 = menu()
# menu_item1.nama = "Pisang"

class employee():
    def __init__ (self, name, age, id, salary):
        self.name = name
        self.age = age
        self.id = id
        self.salary = salary

emp1 = employee("harshit", 22, 1000, 1234)
emp2 = employee("arjun", 23, 2000, 2234)
