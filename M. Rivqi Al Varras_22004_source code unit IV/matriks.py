def main():
    print("Operasi Perkalian 2 Buah Matriks")
m, n = map(int, input("Matriks pertama berorde : ").strip().split())
m1, n1 = map(int, input("Matriks kedua berorde : ").strip().split())
M1 = [[0 for _ in range(n)] for _ in range(m)]
M2 = [[0 for _ in range(n1)] for _ in range(m1)]
M3 = [[0 for _ in range(n1)] for _ in range(m)]
if n != m1 :
    print ("Perkalian matriks tidak dapat dilakukan, karena tidak sesuai dengan aturan perkalian matriks")
for i in range(m) :
    for j in range(n):
        M1[i][j] = int(input(f"Masukan elemen M1[{i+1} {j+1}] = "))
for i in range(m1) :
    for j in range (n1) :
        M2[i][j] = int(input(f"Masukan elemen M2[{i+1} {j+1}] = "))
for i in range(m) :
    for j in range(n1) :
        for k in range(n1) :
            M3[i][j] += M1[i][k] * M2[k][j]
print("Hasil perkaliannya adalah : ")
for i in range(m) :
    for j in range(n1):
        print(f"M3[{i+1} {j+1}] = ", M3[i][j])
if __name__ == "__main__":
    main()