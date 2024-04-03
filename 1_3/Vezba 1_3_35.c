#include <stdio.h>

int main () {
    int n, s = 0;
    printf("Unesite broj n: ");
    scanf("%d", &n);
    
    if (n < 1) {
        printf("Greska: neispravan unos.\n");
        return -1;
    }

    for (int i = 1; i <= n; i ++) {
        s += i*i*i;
    }

    printf("Suma kubova: %d\n", s);
    return 0;
}