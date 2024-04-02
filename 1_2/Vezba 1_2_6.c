#include <stdio.h>

int main() {
int h,m;
printf("Unesite vreme: ");
scanf("%d:%d", &h, &m);
if (h<0 || h>23 || m<0 || m > 59) {
printf("Greska: neispravan unos vremena.\n");
return 1;
}
if (h == 0 && m == 0) {
printf("Sad je ponoc! :D\n");
return 0;
}
if (m == 0) {
h--;
m=60;
}
printf("Do ponoci: %d sati i %d minuta\n", 23-h, 60-m);
return 0;
}
