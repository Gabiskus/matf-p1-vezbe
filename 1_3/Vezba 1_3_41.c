#include <stdio.h>
#include <math.h>

int main () {
    double x, p = 1;
    int n;

    printf("Unesite redom brojeve x i n: ");
    scanf("%lf %d", &x, &n);

    if (n < 1) {
        printf("Greska: neispravan unos.\n");
        return -1;
    }

    for (int i = 1; i<=n; i++) {
        p *= 1 + cos(pow(x,i));
    }
    printf("P = %lf\n", p);
    return 0;
}