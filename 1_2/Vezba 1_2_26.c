#include <stdio.h>

int main () {
int g, m, f;
printf("Unesite godinu: ");
scanf("%d", &g);
printf("Unesite mesec: ");
scanf("%d",&m);
if (g % 4 == 0 && g % 100 != 0 || g%400 == 0) {
f = 29;
}
else {
f = 28;}
switch(m) {
case 1:
printf("Januar, 31 dan\n");
break;
case 2:
printf("Februar, %d dana\n", f);
break;
case 3:
printf("Mart, 31 dan\n");
break;
case 4:
printf("April, 30 dan\n");
break;
case 5:
printf("Maj, 31 dan\n");
break;
case 6:
printf("Jun, 30 dan\n");
break;
case 7:
printf("Jul, 31 dan\n");
break;
case 8:
printf("Avgust, 31 dan\n");
break;
case 9:
printf("Septembar, 30 dan\n");
break;
case 10:
printf("Oktobar, 31 dan\n");
break;
case 11:
printf("Novembar, 30 dan\n");
break;
case 12:
printf("Decembar, 31 dan\n");
break;
default:
printf("Greska: neispravan unos meseca.\n");
return 1;
}


return 0;
}
