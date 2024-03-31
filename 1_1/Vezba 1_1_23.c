#include <stdio.h>
#include <math.h>

int main () {
	double  a,O, P;
	int p;
	printf("Unesite duzinu stranice trougla: ");
	scanf("%lf", &a);
	O = 3*a;
	P = pow(a,2)*sqrt(3)/4;
	P = P * 100;
	p = P;
	P = p / 100.0;
	printf("Obim: %.2lf\nPovrsina: %.2lf\n", O, P);
	return 0;
}
