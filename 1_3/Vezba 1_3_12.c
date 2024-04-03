#include <stdio.h>

int main() {
int t, m, p = 0,n = 0;
printf("Unesite broj t: ");
scanf("%d", &t);
if (t < 0) {
printf("Greska: Neispravan unos boja t.\n");
return 1;
}
if (t == 0) {
printf("Nema evidentiranih transakcija.\n");
return 1;
}
printf("Unesite transtakcije: \n");
for (int i = 0; i<t; i++) {
	scanf("%d", &m);
	if (m>0) {
	p += m;	
	}
	if (m<0) {
	n += m;	
	}
}	

printf ("Prihod: %d\n", p);
printf ("Rashod: %d\n", n);
if (p+n >= 0) {
printf ("Zarada: %d\n", p+n); }
if (p+n < 0) {
printf ("Guitak: %d\n", p-n); }
return 0;
}
