# |===== TUPLE =====|
#-- Tuple sama dengan list namun tidak bisa diganti2 dan tuple menggunakan () bukan []


# Example:
tupleExample = (2, 3)
tupleExample[0] = 4
print(tupleExample) #TIDAK BISA!!

tupleExample = ('Python', 20, 3.8, True)
print(tupleExample)
tupleExample[1] = 30

print(tupleExample[1:3])
print(tupleExample[-2])

# |===== DICTIONARY =====|
#-- Dictionary (key:value) dan memakai {} dan ,

#Example:
customer = {
    "id": 100,
    "nama": "Budi",
    "umur": 23
}
print(customer)

customer = {
    "nama": "cecep",
    "umur": 30
}
customer["nama"] = "Dodi"
customer["Pekerjaan"] = "Programmer" #Bisa ditambah
customer.pop("umur") #Menghapus


print(customer)
print(customer["nama"])
print(customer["umur"])

## |===== SET =====|
# Union : Gabungan
# Intersection : Irisan
# Difference : A not B or B not A
# Symmetric Difference : Gabungan - Irisan

numbers1 = {1,3,5,4,10}
numbers2 = {3,4,10,7,8}

numbers_union = numbers1.union(numbers2)
print(numbers_union) #{1, 3, 4, 5, 7, 8, 10}
numbers_difference = numbers1.difference(numbers2)
print(numbers_difference) #{1, 5}
numbers_intersection = numbers1.intersection(numbers2)
print(numbers_intersection) #{10, 3, 4}
numbers_sym_difference = numbers1.symmetric_difference(numbers2)
print(numbers_sym_difference) #{1, 5, 7, 8}




