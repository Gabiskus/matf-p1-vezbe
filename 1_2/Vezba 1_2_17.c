#include <stdio.h>
#include <stdlib.h>
int main() {
int n;
double ax,ay,bx,by,cx,cy;
printf("Unesite koordinate tacke A: ");
scanf("%lf %lf", &ax, &ay);
printf("Unesite koordinate tacke B: ");
scanf("%lf %lf", &bx, &by);
printf("Unesite koordinate tacke C: ");
scanf("%lf %lf", &cx, &cy);
n = (ax*(by-cy)+bx*(cy-ay)+cx*(ay-by));
if(n== 0) {
printf("Tacke se nalaze na istoj pravoj.\n");
}
else {
printf("Tacke se ne nalaze na istoj pravoj.\n");
}
return 0;
}
