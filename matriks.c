#include <stdio.h>//library untuk menjalankan perintah scanf atau printf


int main(){//fungsi utama sebuah program
	int n, m, n1, m1, i, j, k;//mendeklarasikan variabel n, m, nl, ml, i, j, k dengen tipedata integer
 	int M1[100][100]; 
 	int M2[100][100];
 	int M3[100][100];//mendeklarassrikan variabel M3 dengan array [100][100] dengan tipedata integer
 	int clrscr();
 
 	printf("Operasi Perkalian 2 Buah Matriks\n");//menampilkan "Operasi Perkalian 2 Buah Matriks" dengan loncat 1 baris
 	printf("Matriks pertama berorde : ");//menampilkan "Matriks pertama berorde"
 	scanf("%i, %i", &m, &n);//memasukkan nilai m1 dan n1 dalam tipedata integer
 	printf("Matriks kedua berorde : ");//menampilkan "Matriks kedua berorde"
	scanf("%i, %i", &m1, &n1);//memasukkan nilai m1 dan n1 dalam tipedata integer
 	if (n!=m1)//fungsi kondisi n tidak sama dengan m1
 	printf("Perkalian matriks tidak dapat dilakukan, karena tidak sesuai dengan aturan perkalian matriks \n");//menampilkan 'Perkalian matriks tidak dapat dilakukan, karena tidak sesuai dengan aturan perkalian matriks'
 	else{//fungsi kondisi terakhir yang bernilai salah
	 for(i=0; i<m; i++){//fungsi pengulangan traversal pada i dari 0 sampai dengan kurang dari m
		for(j=0; j<n; j++){//fungsi pengulangan traversal pada j dari 0 sampai dengan kurang dari n
		printf("Masukan elemen M1[%i %i] = ",i+1,j+1);//menampilkan Masukan elemen M1 yang di inputkan dalam tipedata integer
		scanf("%i", &M1[i][j]);//memasukkan nilai M1[i][j] dalam tipedata integer
		}
	}
	}
	for(i=0; i<m1; i++){//fungsi pengulangan traversal pada i sampai dengan kurang dari m1
		for(j=0; j<n1; j++){//fungsi pengulangan traversal pada j sampai dengan kurang dari n1
			printf("Masukan elemen M2[%i %i] = ",i+1,j+1);//menampilkan Masukan elemen M2 dengan input nilai bertipedata integer
			scanf("%i", &M2[i][j]);//memasukkan nilai M2[i][j]
		}
	}
	for(i=0; i<m; i++){//fungsi pengulangan traversal pada i sampai dengan kurang dari m
	for(j=0; j<n1; j++){//fungsi pengulangan traversal pada j sampai dengan kurang dari n1
	M3[i][j] = 0;//inisialisasi M3[i][j]=0
	for(k=0; k<m1; k++){//fungsi pengulangan traversal k dari 0 sampai dengan kurang dari m1
		M3[i][j]=M3[i][j]+(M1[i][j]*M2[k][j]);//inisialisasi M3[i][j]=M3[i][j]+(M1[i][j]*M2[k][j])
	}
	}
	}
	printf("Hasil perkaliannya adalah : "); //menampilkan 'hasil perkaliannya adalah'
	for(i=0; i<m; i++){//fungsi pengulangan traversal pada i dari 0 sampai dengan kurang dari m
	for(j=0; j<n1; j++)//fungsi pengulangan traversal pada j dari 0 sampai dengan kurang dari n1
	{//batas awal dari pengulangan
	printf("M3[%i %i] = %i \n", i+1,j+1, M3[i][j]);
	}
	}
	return 0;
 }//
