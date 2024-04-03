#include <stdio.h>

int main() {
int n, i= 0;
double m,a;
printf("Nikolin budzet: ");
scanf("%lf", &m);
printf("Unesite broj artikala: ");
scanf("%d", &n);
printf("Unesite cene artikala: ");
do {
scanf("%lf", &a);
if (m >= a) {
i++;
}

n--;
} while (n>0);
printf("Ukupno artikala: %d\n",i);
return 0;
}
