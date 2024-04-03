#include <stdio.h>

int tablica_mnozenja(int n);
int tablica_kvadrata(int n);
int tablica_rotacije(int n);
int pravouglitrougaokordinata(int n);

int main () {
    int n;
    printf("Unesite broj n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Greska: neispravan unos.\n");
        return -1;
    }

    //tablica_mnozenja(n); A
    //tablica_kvadrata(n); B
    //tablica_rotacije(n); C
    //pravouglitrougaokordinata(n); D
    return 0;
}

int tablica_mnozenja(int n) {
    for (int i = 1; i <= n; i++) {
        for(int j = 1; j<=n; j++) {
            if(i*j > 9) {printf("%d  ", i*j);}
            else {printf("%d   ", i*j);}
        }
        printf("\n");
    }
}

int tablica_kvadrata(int n) {
    for (int i = 0; i < n; i++) {
        for(int j = 1; j<=n; j++) {
            if((i*n)+j > 9) {printf("%d  ", (i*n)+j);}
            else {printf("%d   ", (i*n)+j);}
        }
        printf("\n");
    }
}

int tablica_rotacije(int n) {
    for (int i = 0; i < n; i++) {
        for(int j = 0; j<n; j++) {
            printf("%d ", (i+j)%n+1);
        }
        printf("\n");
    }
}

int pravouglitrougaokordinata(int n) {
    for (int i = 0; i < n; i++) {
        for(int j = 0; j<n; j++) {
            if(j+i < n) {
                printf("(%d,%d) ", i,j);
            }
        }
        printf("\n");
    }
}