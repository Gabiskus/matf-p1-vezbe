#include <stdio.h>

int main() {
	float x;
	printf("Unesite broj funti: ");
	scanf("%f", &x);
	printf("%.2f lb = %.2f kg\n", x, x*0.45359237);
	return 0;
}
