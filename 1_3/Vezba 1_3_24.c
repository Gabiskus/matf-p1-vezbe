#include <stdio.h>
#include <math.h>
int main () {
int n,r = 0, i = 0;
printf("Unesite broj: ");
scanf("%d", &n);
if (n<0) {
printf("Greska: negativan broj.\n");
return 1;
}
while (n>0) {
if (n%10%2 == 0) {r += pow (10, i) * ((n %10) + 1); }
else {r += pow (10, i) * (n %10);}
n /=10;
i++;
} 


printf("Rezultat: %d\n", r);
return 0;
}
