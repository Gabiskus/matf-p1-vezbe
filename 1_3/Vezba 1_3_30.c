#include <stdio.h>
#include <math.h>

int main () {
    int n;
    double w = 840, l = 1189;
    printf("Unesite format papira: ");
    scanf("%d", &n);
    if (n<0) {
        printf("Greska: neispravan unos\n");
        return -1;
    }
    for (int i = 0; i<n; i++) {
        if (w < l) {
            l /= 2;
        }
        else {
            w /= 2; 
        }

    }
    printf("Dimenzije papira: %.0lf %.0lf\n", w, l);
    return 0;
}