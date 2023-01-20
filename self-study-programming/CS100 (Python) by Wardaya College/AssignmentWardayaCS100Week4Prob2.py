input_jam = int(input("Masukkan Jam (Format 24 Jam): "))
input_menit = int(input("Masukkan Menit: "))

if input_jam==24:
    input_jam2 = 0
    input_jam = str(input_jam)
    input_menit = str(input_menit)
    input_jam2 = str(input_jam2)
    print("Jam",input_jam + ":" + input_menit,"sama dengan",input_jam2 + ":" + input_menit + "AM dalam format 12 jam")
elif input_jam>12:
    input_jam2 = input_jam-12
    input_jam = str(input_jam)
    input_menit = str(input_menit)
    input_jam2 = str(input_jam2)
    print("Jam",input_jam + ":" + input_menit,"sama dengan",input_jam2 + ":" + input_menit + "PM dalam format 12 jam")
else:
    input_jam2 = input_jam
    input_jam = str(input_jam)
    input_menit = str(input_menit)
    input_jam2 = str(input_jam2)
    print("Jam",input_jam + ":" + input_menit,"sama dengan",input_jam2 + ":" + input_menit + "AM dalam format 12 jam")