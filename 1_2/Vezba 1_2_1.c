#include <stdio.h>

int main() {
int a,b,c;
printf("Unesite tri cela broja: ");
scanf("%d %d %d", &a, &b, &c);
if(a<=b && a<=c) {
printf("Najmanji: %d\n", a);
}
else if(b<=a && b<=c) {
printf("Najmanji: %d\n", b);
}
else {
printf("Najmanji: %d\n", c);
}
return 0;
}
