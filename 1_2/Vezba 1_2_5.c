#include <stdio.h>

int main() {
int a,b,c, min;
printf("Unesite tri cene: ");
scanf("%d %d %d", &a, &b, &c);
if (a<0 || b<0 || c<0) {
printf("Greska: neispravan unos cene.\n");
return 1;
}
if(a<=b && a<=c) {
min = a;
}
else if(b<=a && b<=c) {
min = b;
}
else {
min = c;
}
printf("Cena sa popustom: %d din\nUsteda: %d din\n", a+b+c-min+1, min-1);
return 0;
}
