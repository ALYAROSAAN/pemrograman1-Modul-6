kolom = int(input())
angka = list(map(int, input(). split()))

a = []
for i in range(0, kolom):
    a.append(angka[i])
for i in range(0, kolom):
    print((i + 1) * a[i], end=' ')