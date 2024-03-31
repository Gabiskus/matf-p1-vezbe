#include <stdio.h>

int main() {
	float a, b, c, d;
	printf("Unesite brojeve: \n");
	scanf("%f %f %f %f", &a, &b, &c, &d);
	printf("Determinanta: %.4f\", a*d-(b*c));
	return 0;
}
