#include <stdio.h>
#include <stdlib.h>
 
int main(){
   int i;
   int numbers[100];
   int count = 100;
   long sum = 0L;
   float average = 0.0f;
   printf("Masukan 100 bilangan: \n");
   for (i = 0; i < count; i ++){
       printf("Data ke - %2d> ",i+1);
       scanf("%d", &numbers[i]);
       sum += numbers[i];
   }
   average = (float)sum/count;
   printf("\n Nilai rata-ratanya adalah: %f\n", average);
  
   system("pause");
   return 0;
}