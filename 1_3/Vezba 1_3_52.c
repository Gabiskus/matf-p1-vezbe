#include <stdio.h>

int jednakostranicnitrougao(int n);
int naopackejednakostranicnitrougao(int n);
int dijamant(int n);
int rumjednakostranicnogtrougla(int n);
int supljidijamant(int n);

int main () {
    int n;
    printf("Unesite broj n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Greska: neispravan unos.\n");
        return -1;
    }

    //jednakostranicnitrougao(n); A
    //naopackejednakostranicnitrougao(n); B
    //dijamant(n); C
    //rumjednakostranicnogtrougla(n); D
    //supljidijamant(n); E
   return 0;
}

int jednakostranicnitrougao(int n) {
    for (int i = 0; i < n; i++) {
        for(int j = 1; j<2*n; j++) {
            if (j >= n-i && j <= n+i) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int naopackejednakostranicnitrougao(int n) {
    for (int i = n; i > 0; i--) {
        for(int j = 1; j<2*n; j++) {
            if (j > n-i && j < n+i) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int dijamant (int n) {
    for (int i = 1; i < n; i++) {
        for(int j = 1; j<2*n; j++) {
            if (j > n-i && j < n+i) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    for (int i = n; i > 0; i--) {
        for(int j = 1; j<2*n; j++) {
            if (j > n-i && j < n+i) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int rumjednakostranicnogtrougla(int n) {
    for (int i = 0; i < n; i++) {
        for(int j = 1; j<2*n; j++) {
            if (j >= n-i && j <= n+i && j%2==(n-i)%2 && j <= n-i) {
                printf("*");
            }
            else if (j >= n-i && j <= n+i && j%2==(n-i)%2 && j >= n+i) {
                printf("*");
            }
            else if (j%2==(n-i)%2 && i == n-1) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int supljidijamant(int n) {
    for (int i = 0; i < n; i++) {
        for(int j = 1; j<2*n; j++) {
            if (j >= n-i && j <= n+i && j%2==(n-i)%2 && j <= n-i) {
                printf("*");
            }
            else if (j >= n-i && j <= n+i && j%2==(n-i)%2 && j >= n+i) {
                printf("*");
            }
            else if (j%2==(n-i)%2 && i == n-1) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    for (int i = n; i > 1; i--) {
        for(int j = 1; j<2*n; j++) {
            if (j > n-i && j < n+i && j%2==(n-i)%2 && j <= n - i + 2) {
                printf("*");
            }
            else if (j > n-i && j < n+i && j%2==(n-i)%2  && j > n+i-4  ) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}