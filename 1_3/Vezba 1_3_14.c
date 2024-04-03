#include <stdio.h>

int main() {
int n, m = 0, p = 1,s = 1;
printf("Unesite broj: \n");
if (n <= 0) {
printf("Greska: Neispravan unos boja n.\n");
return 1;
}
scanf("%d", &m);
if(m > 0 ) {
p*= m;
}
if (m == 0) {printf ("Nije unet nijedan broj\n");
return 1;}


while (m != 0) {
scanf("%d", &m);
if(m > 0 ) {
p*= m;
}

}
printf ("Proizvod pozitivnih broje je %d\n", p);
return 0;
}
