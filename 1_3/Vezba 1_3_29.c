#include <stdio.h>
int main () {
int n, r= 1, p=0, t;
printf("Unesite broj n: ");
scanf("%d", &n);
if (n<0) {
printf("Greska: neispravan unos.\n");
return 1; }
while (n != 1) {
if (n % 2 == 0) {
printf("%d ",n);
n/=2;
}
else {
printf("%d ",n);
n = (3 * n + 1) / 2;
}

}
printf("1");
printf("\n");
return 0;

}
