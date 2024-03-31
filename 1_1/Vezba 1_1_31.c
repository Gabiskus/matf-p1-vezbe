#include <stdio.h>

int main() {
int a,b;
	printf("Unesite dva cela broja: ");
	scanf("%d %d", &a, &b);
	(a<=b) ? printf("Minimum: %d\n", a) : printf("Minimum: %d\n", b);
	return 0;
	
} 
