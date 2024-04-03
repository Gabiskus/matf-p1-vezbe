#include <stdio.h>

int main () {
    int n;
    double p=1, pr = 1;
    printf("Unesite broj n: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Greska: neispravan unos.\n");
        return -1;
    }

    for (int i = 2; i <= n; i++) {
        pr *= 1.0/i;
        p *= (1 + pr);
    }
    printf("P = %lf\n", p);
    return 0;
}