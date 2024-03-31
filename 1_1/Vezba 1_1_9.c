#include <stdio.h>

int main () { 
	int a,b;
	printf("Unesite vrednosti a i b: ");
	scanf("%d %d", &a, &b);
	a = a + b;
	b = a - 2*b;
	printf("Nove vrednosti su a = %d, b = %d\n", a, b);
}
