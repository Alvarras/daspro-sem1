numbers = [None for i in range(100)]
count = 10
sum = 0
average = 0.0
print("\nMasukan 100 bilangan : ")
print()
for i in range(0, 100):
    print("Data ke - ",i+1, ">");numbers[i]=int(input())
    sum+=numbers[i]
    average=float(sum)/count
print("\n Nilai rata-ratanya adalah: ",average,"\n")