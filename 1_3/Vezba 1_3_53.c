#include <stdio.h>

int main () {
    int n;
    printf("Unesite broj n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Greska: neispravan unos.\n");
        return -1;
    }

    for (int i = 1; i<=n*2; i++) {
        for (int j=1; j <=n; j++) {
            if(i<n) {
                if(i == j) {
                    printf("*");
                }
                else {
                    printf(" ");
                }
            }
            else if (i==n) {
                printf("*");
            }
            else {
                if(j == 2*n-i) {
                    printf("*");
                }
                else {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
   return 0;
}

