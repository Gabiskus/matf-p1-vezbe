#include <stdio.h>

int main() {
	float x;
	printf("Unesite temperaturu u F: ");
	scanf("%f", &x);
	printf("%.2f F = %.2f C\n", x, (x-32)*5/9);
	return 0;
}
