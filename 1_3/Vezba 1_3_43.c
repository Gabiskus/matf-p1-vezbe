#include <stdio.h>
#include <math.h>

int main () {
    int n;
    double x, p = 1, s = 1;
    printf("Unesite x i n: ");
    scanf("%lf %d", &x, &n);
    
    if (n < 1) {
        printf("Greska: neispravan unos.\n");
        return -1;
    }

    for (int i = 2; i <= 2*n; i+=2) {
        p *= ((x*x)/((i)*(i-1)));
        if (i % 4 == 0) {
            s += p;
        }
        else {
            s -= p;
        }
    }
    printf("S = %lf\n", s);
    return 0;
}