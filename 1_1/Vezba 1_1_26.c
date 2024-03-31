#include <stdio.h>

int main () {
	double a,b,c;
	printf("Unesite tri cela broja: ");
	scanf("%lf %lf %lf", &a, &b, &c);
	printf("Aritmeticka sredina: %.2f\n", (a+b+c)/3);
	return 0;
}
