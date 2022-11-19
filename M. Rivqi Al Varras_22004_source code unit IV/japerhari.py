print ("jumlah hari pada suatu bulan pada tahun tertentu")
print (".........................................")
hari = [31,28,31,30,31,30,31,31,30,31,30,31]
bulan=int(input("Masukan Bulan ke- (1-12) : "))
tahun=int(input("Masukan Tahun: "))
if(bulan == 2):
    if((tahun % 4 == 0) & (tahun % 100 !=0)):
     jumlah_hari = 29
    else:
        jumlah_hari = 28
else:jumlah_hari = hari [bulan-1]
print("\nJumlah hari = ", jumlah_hari)