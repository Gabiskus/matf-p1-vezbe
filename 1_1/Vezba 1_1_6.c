#include <stdio.h>

int main () { 
	int x,y,z;
	printf("Unesite cenu, kolicinu i iznos: ");
	scanf("%d %d %d", &x, &y, &z);
	printf("Kusur: %d\n", z-x*y);
}
