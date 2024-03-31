#include <stdio.h>
#include <math.h>

int main () {
	double a, b, c, o, p, O;
	printf("Unesite duzine stranica trougla: ");
	scanf("%lf %lf %lf", &a, &b, &c);
	O = a + b + c;
	o = O/2;
	p = sqrt(o*(o-a)*(o-b)*(o-c));
	printf("Obim: %.2lf\nPovrsina: %.2lf\n", O, p);
	return 0;
}
