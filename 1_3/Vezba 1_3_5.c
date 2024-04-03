#include <stdio.h>

int main() {
int n,i;
unsigned long faktorijel = 1;

printf("Unesite pozitivan ceo broj: ");
scanf("%u", &n);
if (n>22) {
printf("Greska: doci ce do prekotracenja.\n");
return 1;
}
if (n<0) {
printf("Greska: Neispravan unos.\n");
return 1;
}
for (i = 1; i<=n; i++) {
	faktorijel *= i;
}

printf ("%u! = %lu\n", n, faktorijel);
return 0;
}
