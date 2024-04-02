#include <stdio.h>
#include <math.h>

int main () {
int k;
double x, px;
printf("Unesite redom x i k: ");
scanf("%lf %d", &x, &k);
if (k > 3 || k < 1) {
printf("Greska: nedozvoljena vrednost za k.\n");
return 1;
}
px = x;
px = 2 * cos(px)-pow(px,3);
switch(k) {
	case 3:
	px = 2 * cos(px)-pow(px,3);
	case 2: 
	px = 2 * cos(px)-pow(px,3);
}
	printf("F(%lf, %d) = %.2lf\n", x, k, px);
return 0;
}
