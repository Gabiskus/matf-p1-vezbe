#include <stdio.h>

int main() {
double m, suma = 0, i = 0;



do {
	scanf("%lf" , &m);
	i++;
	suma += m;
	if (m < 0) {
printf("Greska: neispravan unos cene\n");
return 1;
} 
} while (m != 0);
if (i == 1) {printf("Nisu unete cene \n" ); return 1;}
i--;
//printf("i je %lf a suma je %lf", i, suma);

printf ("Prosecna cena: %lf\n", suma/i);
return 0;
}
