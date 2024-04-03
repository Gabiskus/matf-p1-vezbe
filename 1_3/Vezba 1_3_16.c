#include <stdio.h>

int main() {
double p = 1, s = 0;
int m = 1;
printf("Unesite brojeve: \n");
scanf("%d", &m);
if(m > 0 ) {
p*= m;
}
if (m == 0) {printf ("Nije unet nijedan broj\n");
return 1;}


while (m != 0) {
scanf("%d", &m);
s++;
p+= m;
}

printf ("Aritmeticka sredina: %lf\n", p/s);
return 0;
}


// Do while bolji za ove primere!!!
