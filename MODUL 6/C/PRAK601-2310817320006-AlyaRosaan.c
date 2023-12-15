#include <stdio.h>

int main(){
    int baris, kolom, i, j, isi;
    scanf("%d %d", &baris, &kolom);
    
    int a[baris][kolom];
    for(i = 0; i < baris; i++){
        for(j = 0; j < kolom; j++){
            scanf("%d", &isi);
            a[i][j] = isi;     
        }
    }    
    for(i = 0; i < baris; i++){
        for(j = 0; j < kolom; j++){
            printf("%d ", a[i][j]);
        }printf("\n");
    } 
    return 0;
    
    
}