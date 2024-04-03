#include <stdio.h>

int main() {
int n, b, p=1;
printf ("Unesite broj: ");
scanf("%d", &n);
int i=n;
if (i< 0) {
i = -i;
}
while (i > 0) {
	b = i%10;
	if (b == 5 && p ==1) {
		
		printf("Broj %d sadrzi cifru 5 \n", n);
		return 0;
	}
	
	i /= 10;
}

printf("Broj %d ne sadrzi cifru 5 \n", n);
		return 0;
return 0;
}
