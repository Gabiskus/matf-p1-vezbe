#include <stdio.h>

int main() {
int n, i ;

printf("Unesite broj n: ");
scanf("%d", &n); 
if (n <= 0) {
printf("Greska: Neispravan unos boja n.\n");
return 1;
}
for (i = 2; i * i<= n; i++) {	
	if (n % i == 0) {
	printf ("%d ", i);
	if (i != n/i) {
	printf ("%d ", n/i);
	}
	}
}
printf("\n");
return 0;
}
//Ner
