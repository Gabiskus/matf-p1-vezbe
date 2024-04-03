#include <stdio.h>

int main() {
int n, r = 0, p;
double a;
printf("Unesite broj n: ");
scanf("%d", &n);

if (n <= 0) {
printf("Greska: Neispravan unos boja n.\n");
return 1;
}

printf("Unesite brojeve: \n");
scanf("%lf", &a);
if (a >= 0) {
p=0;
} else {
p=1;
}

while (n>1) {
scanf("%lf", &a);
if (a >= 0 && p==1) { r++;
} 
if (a < 0 && p==0) { r++;
} 
if (a >= 0) {
p=0;
} else {
p=1;
}
n--;
} 


printf("Broj promena je %d. \n", r);
return 0;
}
