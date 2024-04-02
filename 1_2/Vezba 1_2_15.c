#include <stdio.h>
#include <stdlib.h>
int main() {
int n;
printf("Unesite cetvorocifreni broj: ");
scanf("%d", &n);
if (abs(n) > 9999 || abs(n) < 1000) {
printf("Greska: niste uneli cetvorocifreni broj.\n");
return 1;
}

if (abs(n/1000)>=abs(n/100%10) && abs(n/100%10)>=abs(n/10%10) && abs(n/10%10)>=abs(n%10)) {
printf("Cifre su uredjene nerastuce.\n");
return 0;
}
else if (abs(n/1000)<=abs(n/100%10) && abs(n/100%10)<=abs(n/10%10) && abs(n/10%10)<=abs(n%10)) {
printf("Cifre su uredjene neopadajuce.\n");
return 0;
}
else {
printf("Cifre nisu uredjene.\n");
}
return 0;
}
