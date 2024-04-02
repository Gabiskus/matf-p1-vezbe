#include <stdio.h>

int main() {
double n;
printf("Unesite jedan realan broj: ");
scanf("%lf", &n);
if (n < 0) {
n = -n;
}
printf("Apsolutna vrednost: %.2lf\n", n);
return 0;
}
