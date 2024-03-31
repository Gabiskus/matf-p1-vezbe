#include <stdio.h>

int main() {
	float x;
	printf("Unesite broj inca: ");
	scanf("%f", &x);
	printf("%.2f in = %.2f cm\n", x, x*2.54);
	return 0;
}
