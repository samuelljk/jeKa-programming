## |=== Assignment Week-5 Part 2 ===|

#Input
input_status_menikah = str(input("Apakah Sudah Menikah \"Iya/Tidak\": "))
input_jumlah_tanggungan = int(input("Jumlah Tanggungan: "))
input_gaji_bulanan = int(input("Gaji Bulanan (Masukkan angka non-desimal): "))

#Gaji per Tahun
gaji_per_tahun = input_gaji_bulanan*12

#PTKP
if input_status_menikah=="Tidak" and input_jumlah_tanggungan==0:
    nilai_PTKP = 54000000
elif input_status_menikah=="Tidak" and input_jumlah_tanggungan==1:
    nilai_PTKP = 58500000
elif input_status_menikah=="Tidak" and input_jumlah_tanggungan==2:
    nilai_PTKP = 63000000
elif input_status_menikah=="Tidak" and input_jumlah_tanggungan==3:
    nilai_PTKP = 67500000
elif input_status_menikah=="Iya" and input_jumlah_tanggungan==0:
    nilai_PTKP = 58500000
elif input_status_menikah=="Iya" and input_jumlah_tanggungan==1:
    nilai_PTKP = 63000000
elif input_status_menikah=="Iya" and input_jumlah_tanggungan==2:
    nilai_PTKP = 67500000
elif input_status_menikah=="Iya" and input_jumlah_tanggungan==3:
    nilai_PTKP = 72000000

#PKP
nilai_PKP = gaji_per_tahun-nilai_PTKP

#PPH (Berdasarkan PKP)
pajak_lima_persen = (50000000*5)/100
pajak_limabelas_persen = (200000000*15)/100
pajak_duapuluhlima_persen = (250000000*25)/100
pajak_tigapuluh_persen = (500000000*30)/100

if nilai_PKP<=50000000:
    nilai_PPH = pajak_lima_persen
elif 50000000<nilai_PKP<=250000000: #50000000>nilai_PKP and nilai_PKP<=250000000:
    nilai_PPH = pajak_lima_persen+pajak_limabelas_persen
elif 250000000<nilai_PKP<=500000000: #250000000>nilai_PKP and nilai_PKP<=500000000:
    nilai_PPH = pajak_lima_persen+pajak_limabelas_persen+pajak_duapuluhlima_persen
elif nilai_PKP>500000000:
    nilai_PPH = pajak_lima_persen+pajak_limabelas_persen+pajak_duapuluhlima_persen+pajak_tigapuluh_persen

print(">>> MENGHITUNG...")

print("Gaji per Tahun Anda:", gaji_per_tahun)
print("PTKP Anda:", nilai_PTKP)
print("PKP Anda:", nilai_PKP)
print("PPH Anda:", nilai_PPH)

