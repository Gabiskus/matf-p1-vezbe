#include <stdio.h>

int main () {
    int n, s = 0, k;
    printf("Unesite broj n: ");
    scanf("%d", &n);
    
    if (n < 1) {
        printf("Greska: neispravan unos.\n");
        return -1;
    }
    for (int i = 1; i <= n; i ++) {
        for (k = 1; k <= i; k++) {
            s += k*k*k;
        }
        printf("[k=%d] Suma kubova: %d\n", i, s);
        s=0;
    }

    return 0;
}