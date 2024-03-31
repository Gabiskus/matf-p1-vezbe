#include <stdio.h>
#include <math.h>
int main() {
double x,y, rez;
printf("Unesite dva realna broja: ");
	scanf("%lf %lf", &x, &y);
	rez = (fmin(x,y)+0.5)/(1+pow(fmax(x,y),2));
	printf("Rezultat: %.2lf\n", rez);
return 0;	
} 

double fmin (double n, double m) {
	double rez;
	if (n<= m) {
	rez=n;
	}
	else {
	rez=m;
	}
	return rez;
}

double fmax(double n, double m) {
	double rez;
	if (n>= m) {
	rez=n;
	}
	else {
	rez=m;
	}
	return rez;
}
