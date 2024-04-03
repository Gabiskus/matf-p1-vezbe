#include <stdio.h>

int main () {
    int m,n;
    printf("Unesite brojeve n i m: ");
    scanf("%d %d", &n,&m);

    if (n < 1 || m < 1) {
        printf("Greska: neispravan unos.\n");
        return -1;
    }

    for (int i = 0; i < n; i++) {
        for (int j=0; j<((m*n)-m+1)*2; j++) {
            if(((i==0 || i==n-1) && j % 2 ==0)||j%(2*(n-1))==0) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }


    return 0;    
}