#include <stdio.h>

int kvadrat_zvezdica(int n);
int rubkvadrata_zvezdica(int n);
int rubkvadratadijagonala_zvezdica(int n);
int main () {
    int n;
    printf("Unesite broj n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Greska: neispravan unos.\n");
        return -1;
    }

    //kvadrat_zvezdica(n); A
    //rubkvadrata_zvezdica(n); B
    //rubkvadratadijagonala_zvezdica(n); C

   return 0;
}

int kvadrat_zvezdica(int n) {
    for (int i = 1; i <= n; i++) {
        for(int j = 1; j<=n; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int rubkvadrata_zvezdica(int n) {
    for (int i = 1; i <= n; i++) {
        for(int j = 1; j<=n; j++) {
            if (i == 1 || i == n) {
                printf("*");
            }
            else if (j == 1 || j == n) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int rubkvadratadijagonala_zvezdica(int n) {
    for (int i = 1; i <= n; i++) {
        for(int j = 1; j<=n; j++) {
            if (i == 1 || i == n) {
                printf("*");
            }
            else if (j == 1 || j == n) {
                printf("*");
            }
            else if (i == j) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}