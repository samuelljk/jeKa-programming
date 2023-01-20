# Example:
listExample = ['Python', 42, 3.9, True, 42]

print(listExample[0]) #Urutan pertama dari kiri = 0
print(listExample[1:4]) #Urutan 1 sampai 3 (4 tidak dihitung)
print(listExample[-1]) #Urutan dari kanan (mulai dari -1)
print(listExample)

## List Operation (CRUD)

#--Create : Append, Insert
listContoh = [42, 'Python', 3.82, 42]
print(listContoh)
listContoh.insert(1, 'Data Science') #Posisi Index-1 Digeser
print(listContoh)
listContoh.append('JavaScript') #Dimasukan di posisi terakhir
print(listContoh)

#--Remove : Remove, Pop, Delete, Clear
listContoh = [42, 'Python', 3.82, 42]
print(listContoh) 
listContoh.remove('Python') #Menghapus
print(listContoh)
listContoh.pop() #Menghapus index ujung belakang
print(listContoh)
del listContoh[1] #Hapus index tertentu
print(listContoh)
listContoh.clear() #Hapus semua
print(listContoh)

#--List Iteration
listContoh = [42, 55, 30, 25, 80]

for item in listContoh: #Untuk setiap elemen/item dalam listContoh
    if item%2 == 0:
        print(item)

#--Chech Item Existance
if 42 in listContoh:
    print("Terdapat angka 40 dalam list.")
else:
    print("Tidak terdapat angka 40 dalam list.")

#--Method : Len, Copy,
listContoh = [42, 55, 30, 25, 80] 
lenght = len(listContoh)
listContoh2 = listContoh.copy() #Agar listContoh berbeda dengan listContoh2
listContoh2[0] = 100
print(listContoh)
print(listContoh2)

listContoh2 = [70, 100]
listContoh.extend(listContoh2)
print(listContoh+listContoh2)
print(listContoh)

print(listContoh.index(55))

listContoh.sort()
print(listContoh)

listContoh.reverse()
print(listContoh)





