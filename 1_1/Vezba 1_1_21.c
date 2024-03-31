#include <stdio.h>

int main() {
	float a, b;
	printf("Unesi duzine stranica: ");
	scanf("%f %f", &a, &b);
	printf("Obim je: %.2f\nPovrsina: %.2f\n", 2*a+2*b, a*b);
	return 0;
}
