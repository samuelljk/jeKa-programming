# # FUNGSI REKURSIF : Readability!
# # # a x b = a + a + a + a + a ... (sampai bx)

# # word = "Computer science"
# # dictWord = dict()
# # for char in word:
# #     print(char)
# #     if char not in dictWord:
# #         dictWord[char] = 1
# #     else:
# #         dictWord[char] = dictWord[char] + 1
# #     print(dictWord)

# # print(dictWord)
# a = 3
# b = 4
# def mult_rekur(a, b):
#     if b == 1:
#         return a
#     else:
#         return a + mult_rekur(a, b-1) # 3 + 3 + 3 + 3 (b == 1)
# print(mult_rekur(a, b))

# # ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

# def iter_fib(param1, param2, param3, counter):
#     #param1: 0, param 2: 1
#     #param 3: param 1 + param 2
#     #counter: saat sampai 1004
#     print()

# # Un = Un - 1 + Un - 2
# # n = fibonnaci (n-1) + fibonnac 
# # 0 1 1 2 3 5 8 13 21 34
# def rekur_fib(number_fibonacci):
#     if number_fibonacci == 0:
#         return 0
#     elif number_fibonacci == 1:
#         return 1
#     else:
#         return rekur_fib(number_fibonacci-1) + rekur_fib(number_fibonacci-2)






#### TUGAS MAX
### Cara 1 (MOST EFFECTIVE) :
# Cal_Year = 1.5
# if type(Cal_Year) == float:
#     print('variable is float yay')
# else:
#     print('variable is not float oh naw')

### Cara 2 :
# variable_input = input("Masukan Variable: ") #Pasti STRING
# if '.' in variable_input:
#     print("Variable adalah Float")
# elif '.' not in variable_input:
#     print("Variable adalah Integer")

### Cara 3 :
# a = 7
# b = 3
# variable_input = str(a / b)
# if '.' in variable_input:
#     print("Variable adalah Float")
# elif '.' not in variable_input:
#     print("Variable adalah Integer")

