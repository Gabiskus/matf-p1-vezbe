#include <stdio.h>
#include <math.h>

int main () {
int a,b,c;
double rez, rez2;
printf("Unesite koeficijente A, B i C: ");
scanf ("%d %d %d", &a, &b, &c);
if (pow(b,2)-4*a*c<0) {
printf("Jednacina nema resenja.\n");
return 1;
} 
else if (pow(b,2)-4*a*c==0) {
rez = -b/2*a;
printf("Jednacina ima jedno realno resenje: %.2lf\n", rez);
return 0;
}
else {
rez = (-b+sqrt(pow(b,2)-4*a*c))/2*a;
rez2 = (-b-sqrt(pow(b,2)-4*a*c))/2*a;
printf("Jednacina ima dva razlicita realna resenja: %.2lf i %.2lf\n", rez, rez2);

return 0;
}

}
