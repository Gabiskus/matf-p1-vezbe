#include <stdio.h>

int main() {
int n;
double rp;
printf("Unesite jedan ceo broj: ");
scanf("%d", &n);
if (n == 0) {
printf("Greska nedozvoljeno je deljenje nulom.\n");
return 1;
} 
rp = n;
printf("Reciprocna vrednost: %.4lf\n", 1/rp);
return 0;
}
