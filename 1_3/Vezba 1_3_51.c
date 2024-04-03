#include <stdio.h>

int pravougao(int n);
int obrnutipravougao (int n);
int bazagoredesnopravougao(int n);
int bazadolelevopravougao (int n);
int dvapravougla(int n);
int jednakokrakitrougao(int n);

int main () {
    int n;
    printf("Unesite broj n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Greska: neispravan unos.\n");
        return -1;
    }

    //pravougao(n); A
    //bazadolelevopravougao(n); B
    //bazagoredesnopravougao(n); C
    //obrnutipravougao(n); D
    //dvapravougla(n); E
    //jednakokrakitrougao(n); F

   return 0;
}

int pravougao (int n) {
    for (int i = 1; i <= n; i++) {
        for(int j = 1; j<=n; j++) {
            if (j+i <= n + 1) {
                printf("*");
            }
        }
        printf("\n");
    }
}

int bazadolelevopravougao(int n) {
    for (int i = n; i > 0; i--) {
        for(int j = 1; j<=n; j++) {
            if (j+i <= n + 1) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }    
}

int bazagoredesnopravougao(int n) {
    for (int i = n; i > 0; i--) {
        for(int j = 1; j<=n; j++) {
            if (j+i >= n + 1) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int obrnutipravougao (int n) {
    for (int i = 1; i <= n; i++) {
        for(int j = 1; j<=n; j++) {
            if (j+i >= n + 1) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int dvapravougla(int n) {
    for (int i = n; i > 0; i--) {
        for(int j = 1; j<=n; j++) {
            if (j+i <= n + 1) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }   
    for (int i = 1; i <= n; i++) {
        for(int j = 1; j<=n; j++) {
            if (j+i < n + 1) {
                printf("*");
            }
        }
        printf("\n");
    }
}

int jednakokrakitrougao(int n) {
    char c;
    printf("Unesite karakter c: ");
    scanf(" %c", &c);
    for (int i = 1; i <= n; i++) {
        for(int j = 1; j<=n; j++) {
            if (j==i || i == n || j == 1) {
                printf("%c", c);
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }    
}