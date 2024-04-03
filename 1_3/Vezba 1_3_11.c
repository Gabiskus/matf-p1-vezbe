#include <stdio.h>

int main() {
int n, suma=0;
printf("Unesite ceo broj: ");
scanf("%d", &n);
int i=n;
if (n <= 0) {
printf("Greska: Neispravan unos boja n.\n");
return 1;
}
while  (i > 0) {
	suma += i%10;
	i /= 10;

}
if (n % suma == 0) {
printf ("Broj %d je deljiv sa %d.\n", n, suma);
}
else {printf ("Broj %d nije deljiv sa %d.\n", n, suma);
}
return 0;
}
