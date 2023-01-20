data = "Ini adalah String"
print(data)
print(type(data))

# 1. Cara membuat String

'''
    1. Dengan menggunakan single quote '...'
    2. Dengan menggunakan double quote "..."
'''

data = 'Menggunakan single quote'
print(data)

data = "Menggunakan double quote"
print(data)

print('"Halo, apa kabar?"')
print("'Halo, apa kabar?'")
print("Ini adalah hari jum'at")

# 2. Menggunakan tanda \

# Membuat tanda ' menjadi string
print('Mari beribadah di hari jum\'at')
print('g\'day, isn\'t it?')

# Backslash
print("C:\\user\\Sam")

# TAB
print("Sam\tJK") # TAB = Menjauh

# Backspace
print("Sam \bJK") # Mendekat

# Newline
print("Baris pertama.\nBaris kedua.") # LF -> Line Feed (UNIX [Linux, MacOS])
print("Baris pertama.\rBaris kedua.") # CR -> Carriage Return (Commodore, Acorn, Lisp)
print("Baris pertama.\r\nBaris kedua.") # CRLF -> Line Feed Carriage Return (Windows)

# 3. String Literal atau Raw

# Hati-hati
print('C:\new folder') # akan salah pathnya

# Menggunakan Raw string
print(r'C:\new \t \b \\folder')

# Multiline Literal String
print("""
Nama : Sam
Kelas : 9 SMP
""")

# Multiline Literal String dan Raw
print(r"""
Nama : Sam
Kelas : 9 SMP\new normal
Website : www.sam.com/newID
""")