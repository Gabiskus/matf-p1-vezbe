#include <stdio.h>
#include <math.h>
int main () {
int n,r = 0, i = 0, c;
printf("Unesite broj: ");
scanf("%d", &n);
if (n<0) {
printf("Greska: neispravan unos.\n");
return 1;
}
c = n;
while (c>0) {
if(n % 100 /10 == n % 10 + n % 1000 / 100) {
n = n%10 + n/100*10;
}

r += pow (10, i) * (n % 10);
n /= 10; 

i++;
c /= 10; //Toliko puta koliko ima n cifara
}
 

 
printf("Rezultat: %d\n",r);
return 0;
}
