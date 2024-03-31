#include <stdio.h>

int main () { 
	int ph, ps, sh, ss;
	printf("Unesite vreme poletanja: ");
	scanf("%d %d", &ph, &ps);
	printf("Unesite vreme sletanja: ");
	scanf("%d %d", &sh, &ss);
	printf("Duzina trajanja leta: %d h i %d min\n", sh-ph, ss-ps); //potrebno je staviti i if granjanje u slucaju da se minuti ne poklapaju pa se dobija negativna vrednost
}
