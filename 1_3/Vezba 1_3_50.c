#include <stdio.h>

int main () {
    int n;
    printf("Unesite broj n: ");
    scanf("%d", &n);

    if (n < 1 || n%2==0) {
        printf("Greska: neispravan unos.\n");
        return -1;
    }

    for (int i = 1; i <= n; i++) {
        for(int j = 1; j<=n; j++) {
            if (j==(n/2)+1 || i==(n/2)+1) {
                printf("+");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }

   return 0;
}