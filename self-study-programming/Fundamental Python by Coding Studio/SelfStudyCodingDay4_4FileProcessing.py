# |== READ ==|
file = open("initext.txt", "r") #Harus diassign ke variable
py = open("SelfStudyCodingDay4_3ClassObjects_1.py", "r")

print(file.read())
print(py.read())

# |== WRITE ==|
file = open("initext.txt", "w")
file.write("Ini adalah text yang baru")
file.close()

# |== APPEND ==|
file = open("initext.txt", "a")
file.write("\nIni adalah text yang diappend")
file.close()
