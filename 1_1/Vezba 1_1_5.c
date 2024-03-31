#include <stdio.h>

int main () { 
	int x,y;
	printf("Unesite kolicinu jabuka (u kg): ");
	scanf("%d", &x);
	printf("Unesite cenu (u dinarima): ");
	scanf("%d", &y);
	printf("Molimo platite %d dinara\n", x*y);
}
