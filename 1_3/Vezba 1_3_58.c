#include <stdio.h>

int main() {
    int n;
    printf("Unesite broj n: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Greska: neispravan unos.\n");
        return -1;
    }

    for(int i = 0; i <= n/2; i++){
        for(int j=1; j<=n-2*i; j++) {
            printf("%d ", j+i);
        }
    }
    printf("\n");
    return 0;
}