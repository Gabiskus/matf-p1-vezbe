#include <stdio.h>
#include <math.h>

int main() {
	int x, p, c, pp, ppl;
	printf("Unesite redom x, p i c: ");
	scanf("%d %d %d", &x, &p, &c);
	pp = x/pow(10,p);
	pp *= pow(10,p);
	c *= pow(10,p);
	ppl = x % pow(10,p);
	printf("Rezultat: %d\n", pp+c+ppl);
	return 0;
}
