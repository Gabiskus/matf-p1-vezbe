#include <stdio.h>

int main () { 
	int a, s, d, j;
	printf("Unesite trocifreni broj: ");
	scanf("%d", &a);
	j = a % 10;
	d = a / 10 % 10;
	s = a / 100;
	printf("Cifra jedinica: %d\nCifra desetica: %d\nCifra stotina: %d\n", j, d, s);
	return 0;
}
