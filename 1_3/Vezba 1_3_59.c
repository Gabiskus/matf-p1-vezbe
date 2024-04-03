#include <stdio.h>

int main() {
    int n;
    printf("Unesite broj n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Greska: neispravan unos.\n");
        return -1;
    }

    for(int i = 1; i <= n; i++){
        for(int j=1; j<=n; j++) {
            if(j%i==1 || i == 1) {
            printf("%d ",j);
            }
        }
        printf("\n");
    }
    return 0;
}