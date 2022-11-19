#include <stdio.h>
int main()
{
int bulan, tahun, jumlahhari;
//inisialisasi array
int jum_hari[12] = {31, 28, 31, 30, 31, 30, 31, 31,30, 31, 30, 31};
printf("----------jumlah hari pada suatu bulan pada tahun tertentu----------\n");
printf("-------------Inputkan Salah satu Bulan dan Tahun------------------\n\n");
printf("==================================================================\n\n");
printf("Masukkan bulan (1..12)\t: ");
scanf("%d", &bulan);
printf("Masukkan tahunnya\t: ");
scanf("%d", &tahun);
//cek tahun kabisat
if(bulan == 2)
{
if(tahun % 4 == 0) {
jumlahhari = 29;
} else {
jumlahhari = 28;
}
} else {
jumlahhari = jum_hari[bulan-1];
}
printf("\nJumlah hari dalam bulan %d tahun %d adalah %d hari\n",bulan,tahun,jumlahhari);
}