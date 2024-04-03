#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main () {
int n,r = 0, i = 0, j = 0;
printf("Unesite broj: ");
scanf("%d", &n);
while (abs(n)>0) {
if (j % 2 == 0) {r += pow (10, i) * (n %10); i++;}
n /=10;
j++;
} 


printf("Rezultat: %d\n", r);
return 0;
}
