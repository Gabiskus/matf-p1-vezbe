#include <stdio.h>

int main() {
char a, b, c;
printf("Unesite karaktere: ");
scanf("%c%c%c", &a, &b, &c);
if((a<'0' || a>'9') && (a<'a' || a>'z') && (a<'A' || a>'Z')) {
	printf("Greska: %c je neispravan karakter\n", a);
	return 1;
}
if((b<'0' || b>'9') && (b<'a' || b>'z') && (b<'A' || b>'Z')) {
	printf("Greska: %c je neispravan karakter\n", b);
	return 1;
}
if((c<'0' || c>'9') && (c<'a' || c>'z') && (c<'A' || c>'Z')) {
	printf("Greska: %c je neispravan karakter\n", c);
	return 1;
}
if (a>='A' && a<='Z') {
a+=32;
}


if (b>='A' && b<='Z') {
b+=32;
}

if (c>='A' && c<='Z') {
c+=32;
}
printf("Rezultat: %c%c%c\n", a, b, c);
return 0;
}
