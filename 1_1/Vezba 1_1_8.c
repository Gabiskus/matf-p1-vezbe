#include <stdio.h>

int main () { 
	int x,y,p;
	printf("Unesite vrednjosti x i y: ");
	scanf("%d %d", &x, &y);
	printf("Pre zamene: x = %d, y = %d\n", x, y);
	p = y;
	y = x;
	x = p;
	printf("Posle zamene: x = %d, y = %d\n", x, y);
}
