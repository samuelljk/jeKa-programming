# OPERASI BITWISE / OPERASI BINER / BINARY

a = 9
b = 5

# BITWISE OR (|)
c = a | b
print('\n|========= OR')
print('Nilai : ',a, ', Binary : ',format(a,'08b'))
print('Nilai : ',b, ', Binary : ',format(b,'08b'))
print('-------------------------------- (|)')
print('Nilai : ',c, ', Binary : ',format(c,'08b'))   

# BITWISE AND (&)
c = a & b
print('\n|========= AND')
print('Nilai : ',a, ', Binary : ',format(a,'08b'))
print('Nilai : ',b, ', Binary : ',format(b,'08b'))
print('-------------------------------- (&)')
print('Nilai : ',c, ', Binary : ',format(c,'08b'))   

# BITWISE XOR (^)
c = a ^ b
print('\n|========= XOR')
print('Nilai : ',a, ', Binary : ',format(a,'08b'))
print('Nilai : ',b, ', Binary : ',format(b,'08b'))
print('-------------------------------- (^)')
print('Nilai : ',c, ', Binary : ',format(c,'08b'))  

# BITWISE NOT (~)
c = ~a
print('\n|========= NOT')
print('Nilai : ',a, ', Binary : ',format(a,'08b'))
#print('Nilai : ',b, ', Binary : ',format(b,'08b'))
print('-------------------------------- (~)')
print('Nilai : ',c, ', Binary : ',format(c,'08b'))
print('-------------------------------- (^)')
d = 0b0000001001
e = 0b1111111111
print('Nilai : ', e^d, ', Binary : ',format(e^d,'08b'))

# SHIFTING

# Shift Right (>>)
c = a >> 2
print('\n|========= >>')
print('Nilai : ',a, ', Binary : ',format(a,'08b'))
#print('Nilai : ',b, ', Binary : ',format(b,'08b'))
print('-------------------------------- (>>)')
print('Nilai : ',c, ', Binary : ',format(c,'08b'))

# Shift Left (<<)
c = a << 2
print('\n|========= <<')
print('Nilai : ',a, ', Binary : ',format(a,'08b'))
#print('Nilai : ',b, ', Binary : ',format(b,'08b'))
print('-------------------------------- (<<)')
print('Nilai : ',c, ', Binary : ',format(c,'08b'))