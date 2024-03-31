#include <stdio.h>

int main () {
	double x1, y1, x2, y2, a, b;
	printf("Unesite koordinate gornjeg levog temena: ");
	scanf("%lf %lf", &x1, &y1);
	printf("Unesite koordinate donjeg desnog temena: ");
	scanf("%lf %lf", &x2, &y2);
	a = x2-x1;
	b = y1-y2;
	printf("Obim: %.2lf\nPovrsina: %.2lf\n", 2*a+2*b, a*b);
	return 0;
}
