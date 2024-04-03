#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
int a, n, i, najv, b, m;
printf("Unesite broj n: ");
scanf("%d", &n);
if (n==0) {printf("Nisu uneti brojevi.\n"); return 1;}
if (n<0) {printf("Greska: neispravan unos.\n"); return 1;}

printf("Unesite brojeve: ");
scanf("%d", &a);
najv = a;
i = 0;
m = a;
while (abs(m)>9) {
m /= 10;
i++;
}
b = abs(a / pow(10,i-1));

while (n>1) {
scanf("%d", &a);
i=0;
m = a;
while (abs(m)>9) {
m /= 10;
i++;
}
if (b < abs(a / pow(10,i-1))) {
b = abs(a / pow(10,i-1));
najv = a;
}
n--;
}
printf("Broj sa najvecom vodecom cifrom je %d\n", najv);

return 0;


}




/* A
int n,  a, p, r;
printf("Unesite broj n: ");
scanf("%d", &n);
if (n<=0) {printf("Greska: neispravan unos.\n"); return 1;}
printf("Unesite brojeve: ");
scanf("%d", &a);
r = abs(a / 10 % 10);
p = a;
while (n>1) {
scanf("%d", &a);
if (r < abs(a / 10 % 10) ) { r = abs(a / 10 % 10); p = a;}
n--;
}
printf("Broj sa najvecom cifrom desetica: %d\n",p);
return 0;
*/

/* B
int n, m,a, najv, b=0, i;
printf("Unesite broj n: ");
scanf("%d", &n);
if (n==0) {printf("Nisu uneti brojevi.\n"); return 1;}
if (n<0) {printf("Greska: neispravan unos.\n"); return 1;}
printf("Unesite brojeve: ");
scanf("%d", &a);
najv = a;
i = 0;
m = a;
while (abs(m)>9) {
m /= 10;
i++;
}
b = i;
while (n>1) {
scanf("%d", &a);
i=0;
m = a;
while (abs(m)>9) {
m /= 10;
i++;
}
if (i > b) {
b = i;
najv = a;
}
n--;
}
printf("Najvise cifara ima broj %d\n", najv);

return 0;
*/

