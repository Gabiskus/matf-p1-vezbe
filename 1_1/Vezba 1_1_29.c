#include <stdio.h>

int main() {
int a,b;
	printf("Unesite dva cela broja: ");
	scanf("%d %d", &a, &b);
	(a!=b) ? printf("a) Rezultat: 1\n") : printf("a) Rezultat: 0\n");  
	(a % 2 == 0 && b % 2 == 0) ? printf("b) Rezultat: 1\n") : printf("b) Rezultat: 0\n");  
	(a >= 0 && b >= 0 && a<= 100 && b <= 100) ? printf("c) Rezultat: 1\n") : printf("c) Rezultat: 0\n");  
	
	return 0;
}
