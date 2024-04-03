#include <stdio.h>

int main() {
double x, m = 1;
int n;
printf("Unesite redom brojeve x i n: ");
scanf("%lf %d", &x, &n);
if (n < 0) {
printf("Greska: Neispravan unos boja n.\n");
return 1;
}
for (int i = n; i>0; i--) {
m *= x;
}
printf("Rezultat: %lf\n", m);
return 0;
}
