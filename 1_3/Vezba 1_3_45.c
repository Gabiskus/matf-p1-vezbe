#include <stdio.h>

int main () {
    int n, s= 0;
    double pr = 3;
    printf("Unesite broj n: ");
    scanf("%d", &n);

    if (n < 5 || n % 2 == 0) {
        printf("Greska: neispravan unos.\n");
        return -1;
    }

    for (int i = 5; i <= n; i+=2) {
        pr *= i;
        if (i%4==1) {
        s += pr;
        }
        else {
            s -=pr;
        }
    }
    printf("S = %d\n", s);
    return 0;
}