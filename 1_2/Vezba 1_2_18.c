#include <stdio.h>

int main () {
int a1,b1,a2,b2, mb, va, presek = 0;
printf("Unesite a1, b1, a2 i b2: ");
scanf("%d %d %d %d", &a1, &b1, &a2, &b2);
if (b1 < a2 && a1 < b2) {
presek = 0;
}
else {
	presek = b1-a2;
}
printf("Duzina preseka: %d\n", presek);
if (presek == 0 ) {printf("Presecni interval: prazan\n");
	}
	else {
	printf("Presecni interval: [%d,%d]\n", a2,b1);
	}
	printf("Duzina koju pokrivaju: %d\n", b1-a1+b2-a2-presek);
	printf("Najmanji interval: [%d,%d]\n", a1, b2);
	return 0;
}
