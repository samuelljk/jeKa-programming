# a = input()

# for i in range(a):
#     b, c = map(int, input().split(' '))
#     for j in range(b):
#         d = str(input())
#         e = 0
#         for k in d:
#             if k == '#':
#                 e += 1
#             elif k == '.':
#                 e += 0
#     print(e)

# a = int(input())
# b = str(a)
# print(b[-2:])

a = int(input())

if 1<=a<=1000:
    if a%3==0 and a%5==0:
        print('FizzBuzz')
    elif a%3==0:
        print('Fizz')
    elif a%5==0:
        print('Buzz')