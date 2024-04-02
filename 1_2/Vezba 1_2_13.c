#include <stdio.h>
#include <stdlib.h>

int main() {
int n, p=1;
printf("Unesite cetvorocifreni broj: ");
scanf("%d", &n);
if (abs(n) > 9999 || abs(n) < 1000) {
printf("Greska: niste uneli cetvorocifreni broj.\n");
return 1;
}
if (n/1000 % 2 == 0) {
p *= abs(n/1000);
}
if (n/100%10% 2 == 0) {
p *= abs(n/100%10);
}
if (n/10%10 %2==0) {
p *= abs(n/10%10);
}
if (n%10 % 2 == 0) {
p *= abs(n%10);
}
if (p == 1) {printf("Nema parnih cifara.\n"); return 1;}
printf("Proizvod parnih cifara: %d\n", p);
return 0;
}
