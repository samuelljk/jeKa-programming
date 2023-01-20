# belajar Casting
# Casting = merubah dari satu tipe data ke tipe lain
# tipe data : integer, float, string, boolean

# Integer
print("|===== INTEGER =====|")
data_int = 9
print("data = ", data_int, "type = ", type(data_int))

data_float = float(data_int)
data_str = str(data_int)
data_bool = bool(data_int) # False jika int = 0
print("data = ", data_float, "type = ", type(data_float))
print("data = ", data_str, "type = ", type(data_str))
print("data = ", data_bool, "type = ", type(data_bool)) # False jika int = 0

# Float
print("|===== FLOAT =====|")
data_float = 9.5
print("data = ", data_float, "type = ", type(data_float))

data_int = int(data_float) # akan dibulatkan ke BAWAH
data_str = str(data_float)
data_bool = bool(data_float) # False jika float = 0
print("data = ", data_int, "type = ", type(data_int)) # akan dibulatkan ke BAWAH
print("data = ", data_str, "type = ", type(data_str))
print("data = ", data_bool, "type = ", type(data_bool)) # False jika float = 0

# Boolean
print("|===== BOOLEAN =====|")
data_bool = False
print("data = ", data_bool, "type = ", type(data_bool))

data_int = int(data_bool) # akan dibulatkan ke BAWAH
data_str = str(data_bool)
data_float = float(data_bool) 
print("data = ", data_int, "type = ", type(data_int)) # akan dibulatkan ke BAWAH
print("data = ", data_str, "type = ", type(data_str))
print("data = ", data_float, "type = ", type(data_float)) 

# String
print("|===== STRING =====|")
data_float = ""
print("data = ", data_float, "type = ", type(data_float))

#data_int = int(data_float) # String harus angka
#data_str = str(data_float) # String harus angka
data_bool = bool(data_float) # False, jika String tidak diisi / kosong
#print("data = ", data_int, "type = ", type(data_int)) # String harus angka
#print("data = ", data_str, "type = ", type(data_str)) # String harus angka
print("data = ", data_bool, "type = ", type(data_bool)) # False, jika String tidak diisi / kosong