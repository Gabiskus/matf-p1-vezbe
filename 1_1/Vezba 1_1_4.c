#include <stdio.h>

int main () { 
	int x,y;
	printf("Unesite cenu prvog artikla: ");
	scanf("%d", &x);
	printf("Unesite cenu drugog artikla: ");
	scanf("%d", &y);
	printf("Ukupna cena: %d\n", x+y);
}
