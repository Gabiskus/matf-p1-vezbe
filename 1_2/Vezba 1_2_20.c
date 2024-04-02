#include <stdio.h>
#include <math.h>

int main () {
int k, p;
printf("Unesite k: ");
scanf("%d", &k);
if (k > 189 || k <= 0) {
printf("Greska: neispravan unos pozicije.\n");
return 1;
}
if(k>0 && k <10) {
p=k;
}
if(k>=10 && k <190) {
if (k%2 == 0) {
p = k/22+1;
}
else {
p = (k-11)/2%10;
}
}
printf("Na %d-toj poziciji je broj %d\n", k, p);
return 0;
}
