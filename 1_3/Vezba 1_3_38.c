#include <stdio.h>
#include <math.h>

int main () {
    int n;
    double x, s = 0;
    printf("Unesite redom brojeve x i n: ");
    scanf("%lf %d", &x, &n);
    
    if (n < 1) {
        printf("Greska: neispravan unos.\n");
        return -1;
    }

    for (int i = 0; i <= n; i++) {
        s += 1/(pow(x,i));
    }
    printf("S = %lf\n", s);
    return 0;
}