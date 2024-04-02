#include <stdio.h>
#include <stdlib.h>
int main() {
double ax,ay,bx,by;
printf("Unesite koordinate tacke A: ");
scanf("%lf %lf", &ax, &ay);
printf("Unesite koordinate tacke B: ");
scanf("%lf %lf", &bx, &by);
if (ax>=0 && bx>=0 && ay>=0 && by>=0) {
printf("Tacke se nalaze u istom kvadrantu.\n");
return 0;
}
if (ax>=0 && bx>=0 && ay<=0 && by<=0) {
printf("Tacke se nalaze u istom kvadrantu.\n");
return 0;
}
if (ax<=0 && bx<=0 && ay>=0 && by>=0) {
printf("Tacke se nalaze u istom kvadrantu.\n");
return 0;
}
if (ax<=0 && bx<=0 && ay<=0 && by<=0) {
printf("Tacke se nalaze u istom kvadrantu.\n");
return 0;
}
printf("Tacke se ne nalaze u istom kvadrantu\n");
return 0;
}
