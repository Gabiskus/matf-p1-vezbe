#include <stdio.h>

int main(){
	int x;
	printf("Unesite broj: ");
	scanf("%d", &x);
	x = x/100*10+x%10; 
	printf("Rezultat: %d\n", x);
	return 0;
}
