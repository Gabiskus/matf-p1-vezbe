#include <stdio.h>

int main() {
int n, m, p = 0;
printf("Unesite broj n: ");
scanf("%d", &n);
if (n <= 0) {
printf("Greska: Neispravan unos boja n.\n");
return 1;
}

printf("Unesite n brojeva: \n");
for (int i = 0; i<n; i++) {
	scanf("%d", &m);
	if (m%2 == -1 && m < 0) {
	p += m;	
	}
}	


printf ("Zbir neparnih i negativnih: %d\n", p);
return 0;
}
