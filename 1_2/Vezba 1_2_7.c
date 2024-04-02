#include <stdio.h>

int main() {
unsigned g;
printf("Unesite godinu: ");
scanf("%u",&g);
if (g % 4 == 0 && g % 100 != 0 || g%400 == 0) {
printf("Godina je prestupna\n");
}
else {
printf("Godina nije prestupna\n");
}
return 0;
}
