#include <stdio.h>
#include <math.h>
int main () {
int n, c, j = 0, x, y;
printf("Unesite broj: ");
scanf("%d", &n);
c = n;
int i = 0;
while (c>0) {
i++;
c /= 10; 
}
printf("%d\n", i);
while (j<=i) {
x = pow(10,i-1);
y = pow(10,j+1);
if (n / x == n % y) {
n %= x;
n /= y;
}
else {printf("Broj nije palindrom.\n"); 
return 1;}

i--;
i--;
}
 printf("Broj je palindrom.\n");
return 0;
}
