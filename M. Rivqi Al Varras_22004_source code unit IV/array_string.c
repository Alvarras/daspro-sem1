#include <stdio.h>
#include <stdlib.h>
#include<stdio.h>
int main(){
   char nama[25];
   int ch, maks=25, nch=0;
   int jk=0, jb=0;
   maks = maks-1;
   system ("cls");
   printf("Masukan nama anda : ");
   while((ch = getchar())!= EOF){
   if(ch == '\n')
   break;
   if (nch < maks){
    nama[nch] = ch;
    if(nama[nch] >= 'a' && nama[nch] <= 'z')
    jk++;
    else if(nama[nch] >= 'A' && nama[nch] <= 'Z')
    jb++;
} nch = nch+1;
}
   nama[nch];
   printf("Nama : %s \n", nama);
   printf("Jumlah huruf kecil : %d \n", jk);
   printf("Jumlah huruf besar : %d \n", jb);
   printf("Jumlah huruf dan spasi : %d \n", nch);
  
   system("pause");
   return 0;
}