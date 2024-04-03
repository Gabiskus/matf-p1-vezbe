/*Zadatak 1.3.33 Program učitava pozitivan ceo broj n,
 a potom i n karak-
tera. Za svaki od samoglasnika ispisati koliko puta 
se pojavio među unetim ka-
rakterima. Ne praviti razliku između malih i velikih 
slova. U slučaju neispravnog
unosa, ispisati odgovarajuću poruku o grešci.*/
#include <stdio.h>

int main () {
    int n, a = 0, e = 0, i = 0, o = 0, u= 0;
    char x;
    printf("Unesite broj n: \n");
    scanf("%d", &n);
    if (n < 0) {
        printf("Greska: neispravan unos\n");
        return 0;
    }
    printf("Unesite n karaktera: ");
    for (int i = 0; i<=n; i++) {
        scanf("%c", &x);
        switch (x) {
            case 'a':
            a++; 
            break;
            case 'A':
            a++; 
            break;
            case 'e':
            e++;
            break;
            case 'E':
            e++; 
            break;
            case 'i':
            i++; 
            break;
            case 'I':
            i++; 
            break;
            case 'o':
            o++; 
            break;
            case 'O':
            o++; 
            break;
            case 'u':
            u++; 
            break;
            case 'U':
            u++; 
            break;
        }
    }
    printf("Samoglasnika a: %d\n", a);
    printf("Samoglasnika e: %d\n", e);
    printf("Samoglasnika i: %d\n", i);
    printf("Samoglasnika o: %d\n", o);
    printf("Samoglasnika u: %d\n", u);



}