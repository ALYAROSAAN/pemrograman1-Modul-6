#include <stdio.h>

int main(){
    int ordo, matriks_A, matriks_B, hasil, baris, kolom, i, j, k;
    scanf("%d", &ordo);

    int a[ordo][ordo], b[ordo][ordo];
    printf("matriks A");

    for(i = 0; i < ordo; i++) {
        for(j = 0; j < ordo; j++) {
            scanf("%d", &matriks_A);
            a[i][j] = matriks_A;
    }}
    printf("matriks B");
    for(i = 0; i < ordo; i++) {
        for(j = 0; j < ordo; j++) {
            scanf("%d", &matriks_B);
            b[i][j] = matriks_B;
    }}
    printf("matiks AxB\n");
    for(i = 0; i < ordo; i++) {
        for(j = 0; j < ordo; j++) {
            for(k = 0, hasil = 0; k < ordo; k++) {
                hasil += a[i][k] * b[k][j] ; }
            printf("%d ", hasil); 
            }
        printf("\n");
        }
    }