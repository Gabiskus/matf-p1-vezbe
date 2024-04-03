#include <stdio.h>

int main () {
    int n;
    printf("Unesite broj n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Greska: neispravan unos.\n");
        return -1;
    }

    for (int i = 0; i<n; i++) {
        for (int j=0; j<=n; j++) {
            if(i%2==0 && i >= j) {
                printf("*");
            }
            if(i%2==1 && i+1 >=j) {
                if(j%2==0) {
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

