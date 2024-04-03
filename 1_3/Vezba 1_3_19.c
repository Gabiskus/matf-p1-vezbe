#include <stdio.h>

int main() {
int n;
double x, min;
printf("Unesite broj artikla: ");
scanf("%d", &n);
if (n<=0) {
printf("Greska: neispravan unos\n");
return 1;
}
printf("Unesite cene artikala: \n"); 
scanf("%lf", &x);
min = x;
do {
scanf("%lf", &x);
if (x<0) {
printf("Greska: neispravan unos cene\n");
return 1;
}
if (min > x) {
	min = x;
}
n--;
} while (n>1);

printf("Najmanja cena: %lf\n",min);
return 0;
}
