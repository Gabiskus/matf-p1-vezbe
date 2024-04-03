#include <stdio.h>

int main () {
    int n;
    printf("Unesite broj n: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Greska: neispravan unos.\n");
        return -1;
    }

    for (int i = 0; i < n; i++) {
        for(int j = 1; j<2*n; j++) {
            if (j >= n-i && j <= n+i && j%2==(n-i)%2 && j <= n-i) {
                printf("*");
            }
            else if (j >= n-i && j <= n+i && j%2==(n-i)%2 && j >= n+i) {
                printf("*");
            }
            else if (j%2==(n-i)%2 && i == n-1) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    for (int i = 1; i < n; i++) {
        for (int j=0; j<2*n-1; j++) {
            if(j==0||j == 2*n-2||(i==n-1 && j % 2==0)) {
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
        