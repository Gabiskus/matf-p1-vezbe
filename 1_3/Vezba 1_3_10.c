#include <stdio.h>

int main() {
int n,i,negativan = 0;

printf("Unesite ceo broj: ");
scanf("%d", &n);
printf("Rezultat: ");
if(n<0) {
	negativan = 1;
	n = -n;
}
if (negativan ==1) {
	printf("-");
}
while  (n > 0) {
	printf("%d", n%10);
	n /= 10;

}

printf("\n");

return 0;
}
