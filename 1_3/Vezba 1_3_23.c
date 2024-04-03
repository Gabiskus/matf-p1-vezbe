#include <stdio.h>
int main () {
int i = 0,n, d, a, r;
printf("Unesite brojeve n i d: ");
scanf("%d %d", &n, &d);
if (n<=1 || d < 0) {
printf("Greska: neispravan unos\n");
return 1;
}
printf("Unesite n brojeva: ");
scanf("%d", &a);
r = a;
while (n>1) {
scanf("%d", &a);
if (r == a + d || r == a - d) {
i++;
}
n--;
r= a;
}

printf("Broj parova: %d\n", i);
return 0;
}
