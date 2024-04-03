#include <stdio.h>

int main () {
    int n;
    double x, a;
    printf("Unesite brojeve x i a: ");
    scanf("%lf %lf", &x, &a);
    printf("Unesite broj n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Greska: neispravan unos.\n");
        return -1;
    }
    double pr = (x+a)*(x+a);
    for (int i = 2; i <= n; i++) {
        pr += a;
        pr *= pr;   
    }
    printf("Izraz = %lf\n", pr);
    return 0;
}