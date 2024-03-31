#include <stdio.h>

int main() {
	float x;
	printf("Unesite broj milja: ");
	scanf("%f", &x);
	printf("%.2f mi = %.2f km\n", x, x*1.609344);
	return 0;
}
