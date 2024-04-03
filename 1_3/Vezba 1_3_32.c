#include <stdio.h>
#include <ctype.h>
int main () {
    printf("Unesite tekst: \n");
    int vs=0, ms=0, c=0, b=0, suma=0;
    char a;
    while (scanf("%c", &a) != EOF) {
        if (isupper(a)) {
            vs++;
        }
        if (islower(a)) {
            ms++;
        }
        if (isdigit(a)) {
            c++;
            suma += a - 48;
        }
        if (isspace(a)) {
            b++;
        }
    }
    printf("Velika slova: %d\n",vs);
    printf("Mala slova: %d\n",ms);
    printf("Cifre: %d\n",c);
    printf("Beline: %d\n", b);
    printf("Suma cifara: %d\n", suma);
}