#include <stdio.h>
int main () {
int n, r= 1, p=0, t;
printf("Unesite broj n: ");
scanf("%d", &n);
if (n<0) {
printf("Greska: neispravan unos.\n");
return 1;
}
for (int i = 1; i<n; i++) {
t = p;
p = r; 
r = r + t;
}
printf("F[%d] = %d\n",n, r);
return 0;
}
