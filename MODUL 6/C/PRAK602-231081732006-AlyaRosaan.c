#include <stdio.h>

int main(){
    int zetsu, ruangan, i;
    scanf("%d", &ruangan);

    int a[ruangan];
    for(i=0; i < ruangan; i++){
        scanf("%d", &zetsu);
        a[i] = zetsu;
    }
    for(i = 0; i < ruangan; i++){
        printf("%d ", a[i] * (i + 1) );
    }return 0;
}