#include <stdio.h>

int main() {
int n, i = 1;

printf("Unesite broj n: ");
scanf("%d", &n); 
if(n==0) {printf("%d \n",n); return 0;}
while (i==1) {
	if(n % 10 == 0) 
	{
	n/=10;
	}
	else {printf("%d \n",n); return 0;}

}

return 0;
}
