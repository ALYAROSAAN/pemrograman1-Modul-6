ordo = int(input())
matriks_A = []
matriks_B = []

print("matriks_A")
for a in range(0, ordo):
    matriks1 = list(map(int, input().split()))
    matriks_A.append(matriks1[0:ordo])

print("matriks_B")
for b in range(0, ordo):
    matriks2 = list(map(int, input().split()))
    matriks_B.append(matriks2[0:ordo])

print("matriks A X B")
for a in range(0, ordo):
    for b in range(0, ordo):
        hasil = 0
        for c in range(0, ordo):
            hasil += matriks_A[a][c] * matriks_B[c][b]
        print(hasil, end=" ")
    print()




