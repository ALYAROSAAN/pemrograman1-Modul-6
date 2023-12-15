#include <stdio.h>

int main(){
    int n1, n2, angka, angka2, i, j;
    scanf("%d %d ", &n1, &n2);
    if (n1 != n2){
        printf("jumlah tidak sama");

    }else{
        int a[n1], b[n2];
        for (i = 0; i < n1, i < n2; i++){
            scanf("%d", &angka);
            a[i]=angka;
        }
        for (i = 0; i < n1, i < n2; i++){
            scanf("%d", &angka2);
            b[i]=angka2;
        } 
        for (i = 0; i < n1; i++){
            printf("%d ", a[i] * b[i]);
        }
    }

}

