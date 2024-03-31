#include <stdio.h>

int main() {
	int n, m;
	printf("Unesite pozitivan ceo broj: ");
	scanf("%d", &n);
	printf("Unesite pozitivan dvocifreni broj: ");
	scanf("%d", &m);
	printf("Rezultat: %d\n", m*1000+n%1000+n/1000*100000);
	return 0;
}
