#include <stdio.h>

int main() {
	int x, h, s, d, j;
	printf("Unesite cetvorocifreni broj: ");
	scanf("%d", &x);
	h = x/1000;
	s = x/100%10;
	d = x/10%10;
	j = x%10;
	printf("Proizvod cifara: %d\n", h*s*d*j);
	printf("Razlika sume krajnjih i srednjih: %d\n", h+j-(s+d));
	printf("Suma kvadrata cifara: %d\n", h*h+s*s+d*d+j*j);
	printf("Broj u obrnutom poretku: %d\n", j*1000+d*100+s*10+h);
	printf("Broj sa zamenjenom cifrom jedinica i stotina: %d\n", h*1000+j*100+d*10+s);
	return 0;
}
