#include <stdio.h>

int main () {
    int n;
    double p;

    printf("Unesite broj n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Greska: neispravan unos.\n");
        return -1;
    }

    p = (n-1) + (1.0/n);

    for (int i = 2; i <= n; i++) {
        p = (n-i) + 1/p;
    }

    printf("R = %lf\n", p);
    return 0;
}