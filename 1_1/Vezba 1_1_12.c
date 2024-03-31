#include <stdio.h>

int main() {
	int x, y;
	printf("Unesi trocifreni broj: ");
	scanf("%d", &x);
	x = x%10*100+x%100/10*10+x/100;
	printf("Obrnuto: %d\n", x);
	return 0;
}
