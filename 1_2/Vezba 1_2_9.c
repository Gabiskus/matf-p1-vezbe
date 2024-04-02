#include <stdio.h>

int main() {
char a, b, c;
int proizvod=1;
printf("Unesite karaktere: ");
scanf("%c %c %c", &a, &b, &c);
if (a<'0' || a>'9' && b<'0' || b>'9' && c<'0' || c>'9') {
printf("Medju unestim karakterima nema cifara.\n");
return 1;
}
if (a>='0' && a<='9') {
a -= 48;
proizvod *= a;
}
if (b>='0' && b<='9') {
b -= 48;
proizvod *= b;
}
if (c>='0' && c<='9') {
c -= 48;
proizvod *= c;
}

printf ("Proizvod cifara: %d\n", proizvod); 
return 0;
}
