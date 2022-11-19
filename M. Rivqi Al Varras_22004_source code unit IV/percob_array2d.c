#include <stdio.h>

int array[3][2];
int main(){
   int x,y;
   array[0][0] = 1;
   printf("\n");
   array[0][1] = 2;
   printf("\n");
   array[1][0] = 3;
   printf("\n");
   array[1][1] = 4;
   printf("\n");
   array[2][0] = 5;
   printf("\n");
   array[2][1] = 6;
   printf("\n");
   array[2][2] = 7;
   printf("\n");
   array[3][0] = 8;
   printf("\n");
   array[3][1] = 9;
   printf("\n");
   array[3][2] = 10;
   printf("\n");
   printf("array[%d] ",0);
   printf("%d", array[0][0]);
   printf("%d", array[0][1]);
   printf("\n");
   printf("array[%d] ",1);
   printf("%d", array[1][0]);
   printf("%d", array[1][1]);
   printf("\n");
   printf("array[%d] ",2);
   printf("%d", array[2][0]);
   printf("%d", array[2][1]);
   printf("%d", array[2][2]);
   printf("\n");
   printf("array[%d] ",3);
   printf("%d", array[3][0]);
   printf("%d", array[3][1]);
   printf("%d", array [3][2]);
   printf("\n");
   return (0);
}