#include <stdio.h>
#include <string.h>

void main(){
    char kode[50], pesan[50];
    int bintang = 0, pagar = 0,  kata1, kata2,i, j;
    scanf("%[^\n]%*c", &kode);
    scanf("%[^\n]%*c", &pesan);
    kata1 = strlen(kode);
    kata2 = strlen(pesan);

    if (kata1 != kata2) {
        printf("panjang kalimat berbeda, pesan palsu");
    } else {
        for(i = 0; i < kata1, i < kata2; i++) {
            if(kode[i] == pesan[i]) {
                if (kode[i] == ' ') {
                    printf(" ");
                } else {
                    printf("*");
                    bintang++;}
            }else{
                printf("#");
                pagar++;}}
        
        printf("\n* = %d", bintang);
        printf("\n# = %d", pagar);
        if(bintang >= pagar){
            printf("\n pesan asli");
        }else{
            printf("\n pesan palsu");
        }}
}