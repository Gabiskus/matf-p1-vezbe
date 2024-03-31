#include <stdio.h>

int main () {
	int a,b,c, cena;
	double p;
	printf("Unesite dimenzije sobe: ");
	scanf("%d %d %d", &a, &b, &c);
	printf("Unesite cenu po kvadratnom metru: ");
	scanf("%d", &cena);
	p = 2 * a* c+ 2 * b * c + a*b;
    p *= 4.0/5.0;
	printf("Moler treba da okreci %.2lf kvadratna metra\n", p);
	printf("Cena krecenja je %.2lf\n", p*cena);
	return 0;
}
