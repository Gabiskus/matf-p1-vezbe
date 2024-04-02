#include <stdio.h>

int main () {
int d,m;
printf("Unesite dan i mesec: ");
scanf("%d.%d.", &d, &m);
if ((m == 12 && d >= 21) || m < 3 || (m == 3 && d <= 21)) {printf("Zima je\n");}
if ((m == 6 && d < 21) || (m == 4 || m ==5) || (m == 3 && d > 21)) {printf("Prolece je\n");}
if ((m == 6 && d >= 21) || (m == 8 || m ==7) || (m == 9 && d < 23)) {printf("Leto je\n");}
if ((m == 9 && d >= 23) || (m == 11 || m ==10) || (m == 12 && d < 21)) {printf("Jesen je\n");}

return 0;
}
