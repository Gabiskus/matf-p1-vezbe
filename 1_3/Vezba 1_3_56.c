#include <stdio.h>

int main () {
    int n;
    printf("Unesite broj n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Greska: neispravan unos.\n");
        return -1;
    }

    for (int i = 0; i < 2*n-1; i++) {
        for (int j=0; j<2*n; j++) {
        if(i<n) {
            if(j>n-i-1 && j<n+i) {
                printf("-");
            }
            else {
                printf("*");
            }
        }
        else {
            if(j>i-n+1 && j<3*n-i-2) {
                printf("-");
            }
            else {
                printf("*");
            }
        }
        }
        printf("\n");
    }


    return 0;    
}
        