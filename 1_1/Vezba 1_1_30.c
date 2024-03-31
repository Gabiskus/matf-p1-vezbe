#include <stdio.h>

int main() {
int a,b;
	printf("Unesite dva cela broja: ");
	scanf("%d %d", &a, &b);
	(a>=b) ? printf("Maksimum: %d\n", a) : printf("Maksimum: %d\n", b);
	return 0;
	
} 
