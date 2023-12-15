baris, kolom = map(int, input(). split())

angka = list(map(int, input(). split()))
i = []

for a in range(0, kolom * baris, kolom):
    i.append(angka[a : a + kolom])

for a in range(baris):
    for b in range(kolom):
        print(i[a][b], end=' ')
    print()
    