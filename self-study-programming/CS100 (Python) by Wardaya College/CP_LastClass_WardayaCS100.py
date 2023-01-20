# https://vjudge.net/
    #Problem1
# def liststring(x): 
#     theString = "" 
    
#     for ele in x: 
#         theString += ele  
    
#     return theString 

# word = str(input())
# listword = list(word)
# firstWord = listword[0]
# restWord = listword[1:]
# print(firstWord.upper() + liststring(restWord))

    #Problem2
# Harus dibagi jadi 2 semangka
# berat masing2 genap
# kiri kanan tidak harus sama
# weight = int(input())
# while 1<=weight<=100:
#     # eachpart = weight/2
#     #20% 40% 60% 80%
#     partSatu = (weight*20)/100 or (weight*40)/100 or (weight*60)/100 or (weight*80)/100 
#     partDua = (weight*20)/100 or (weight*40)/100 or (weight*60)/100 or (weight*80)/100 
#     conditionPositive = partSatu + partDua 
#     if partSatu%2 == 0 and partDua%2 == 0 and conditionPositive == weight:
#         print("YES")
#     else:
#         print("NO")
#     break

weight = int(input())
while 1<=weight<=100:
    if weight%2 == 0 and weight>2:
        print("YES")
    else:
        print("NO")
    break
   
    #Problem3
# jarak = int(input("Masukkan ANgka: "))
# variableOutput = 0
# while jarak != 0:
#     if jarak-5 != 0:
#         variableOutput = variableOutput + 1
#     elif jarak-4 != 0:
#         variableOutput = variableOutput + 1
#     elif jarak-3 != 0:
#         variableOutput = variableOutput + 1
#     elif jarak-2 != 0:
#         variableOutput = variableOutput + 1
#     elif jarak-1 != 0:
#         variableOutput = variableOutput + 1
#     else:
#         variableOutput = variableOutput + 0
# print(variableOutput)
    
    #Problem4
# def liststring(x): 
#     theString = "" 
    
#     for ele in x: 
#         theString += ele  
    
#     return theString 

# maximum = int(input())
# theWord = input()
# listTheWord = list(theWord)

# if len(theWord) == maximum:
#     print(theWord)
# elif len(theWord) > maximum:
#     remain = maximum - len(theWord)
#     print(liststring(listTheWord[]) + len(listTheWord[0] + len(listTheWord[])))
