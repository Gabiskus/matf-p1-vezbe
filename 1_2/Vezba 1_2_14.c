#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
int n, najv=1, najm=9, v,m, br, p=0;
printf("Unesite cetvorocifreni broj: ");
scanf("%d", &n);
if (abs(n) > 9999 || abs(n) < 1000) {
printf("Greska: niste uneli cetvorocifreni broj.\n");
return 1;
}
if (n<0) {n=-n; p=1;}
if (abs(n%10) > najv) {najv = n%10; v=0;}
if (abs(n%10) < najm) {najm = n%10; m=0;}
if (abs(n/10%10) > najv) {najv = n/10%10; v=1;}
if (abs(n/10%10) < najm) {najm = n/10%10; m=1;}
if (abs(n/100%10) > najv) {najv = n/100%10; v=2;}
if (abs(n/100%10) < najm) {najm = n/100%10; m=2;}
if (abs(n/1000) > najv) {najv = n/1000; v=3;}
if (abs(n/1000) < najm) {najm = n/1000; m=3;}
br = n - najv*pow(10,v) - najm*pow(10,m) + najv*pow(10,m) + najm*pow(10,v);
if (p == 1) {br=-br;}
printf("Rezultat: %d\n",br);
return 0;
}
