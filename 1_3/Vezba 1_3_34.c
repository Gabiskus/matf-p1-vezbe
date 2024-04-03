#include <stdio.h>

int main () {
    int n, Z = 0, I=0, m = 0, a=0;
    char c;
    printf("Unesitre broj n: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Greska: neispravan unos!\n");
        return -1;
    }

    for (int i = 0; i < n; i++) {
        printf("Unesitre %d. karakter: ", i+1);
        scanf(" %c", &c);
        if (c == 'Z' ) {
            Z++;
        }
        if (c == 'i') {
            I++;
        }
        if (c == 'm') {
            m++;
        }
        if (c == 'a') {
            a++;
        }
    }
    if (Z >= 1 && I >= 1 && m >= 1 && a >= 1) {
        printf("Moze se napisati rec Zima.\n");
    }
    else {
        printf("Ne moze se napisati rec zima.\n");
    }
}