#include <stdio.h>

int main() {
int a,b,c, suma=0;
printf("Unesite tri cela broja: ");
scanf("%d %d %d", &a, &b, &c);
if (a>0) {
suma += a;
}
if (b>0) {
suma += b;
}
if (c>0) {
suma += c;
}
printf("Zbir pozitivnih: %d\n", suma);
return 0;
}
