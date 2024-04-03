#include <stdio.h>
#include <stdlib.h>
int main () {
int n = 1, najm, najv;
printf("Unesite brojeve: ");
scanf("%d", &n);
najv = n;
najm = n;
if (n == 0) {
printf("Nisu unete nadmorske visine.\n");
return 1;
}
while (n != 0) {
scanf("%d", &n);
if (n > najv && n != 0) {
najv = n;
}
if (n < najm && n != 0) {
najm = n;
}
}
printf("Razlika: %d\n", abs(najv-najm));

return 0;
}
