#include <stdio.h>
#define PI 3.14159265358979

int main() {
	float r;
	printf("Unestie poluprecnik: ");
	scanf("%f", &r);
	printf("Obim: %.2f\nPovrsina: %.2f\n", 2*r*PI, r*r*PI);
	return 0;
}
