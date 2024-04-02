#include <stdio.h>

int main () {
char k;
int r,x,y;
printf("Unesite izraz: ");
scanf("%d %c %d", &x, &k, &y);
if (k != '+' && k != '-' && k != '*' && k != '/' && k != '%') {
	printf("Greska: nepoznat operator\n");
	return 1;
}
if (k == '/' && y == 0) {
	printf("Greska: deljenje nulom\n");
	return 1;
}
switch (k) {
	case '+':
	r = x+y;
	break;
	case '-':
	r = x-y;
	break;
	case '*':
	r = x*y;
	break;
	case '/':
	r = x/y;
	break;
	case '%':
	r = x%y;
	break;
}
	printf("Rezultat je: %d\n", r);
	return 0;
	
}
