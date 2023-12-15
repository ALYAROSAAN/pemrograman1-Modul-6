kode = input()
pesan = input()

kata1 = len(kode)
kata2 = len(pesan)

bintang = 0
pagar = 0

if kata1 != kata2:
     print("panjang kalimat berbeda, pesan palsu")
else:
    for i in range(kata1):
        if kode[i] == pesan[i]:
            if kode[i] == ' ':
                print(" ", end='')
            else:
                print("*", end='')
                bintang += 1
        else:
            print("#", end='')
            pagar += 1

    print("\n* =", bintang)
    print("# =", pagar)

    if bintang >= pagar:
        print("pesan asli")
    else:
        print("pesan palsu")

