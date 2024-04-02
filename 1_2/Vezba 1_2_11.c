#include <stdio.h>
#include <stdlib.h>

int main() {
int n, naj=1;
printf("Unesite cetvorocifreni broj: ");
scanf("%d", &n);
if (abs(n) > 9999 || abs(n) < 1000) {
printf("Greska: niste uneli cetvorocifreni broj.\n");
return 1;
}
if (abs(n/1000) > naj) {
naj = abs(n/1000);
}
if (abs(n/100%10) > naj) {
naj = abs(n/100%10);
}
if (abs(n/10%10) > naj) {
naj = abs(n/10%10);
}
if (abs(n%10) > naj) {
naj = abs(n%10);
}
printf("Najveca cifra je: %d\n",naj);
return 0;
}
