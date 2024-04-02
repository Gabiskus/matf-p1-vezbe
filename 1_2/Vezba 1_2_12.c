#include <stdio.h>
#include <math.h>
int main() {
int n;
printf("Unesite pozitivan trocifreni broj: ");
scanf("%d", &n);
if(n<100 || n>999){
printf("Greska: niste uneli pozitivan trocifreni broj.\n");
return 1;
}
if(pow(n/100,3)+pow(n/10%10,3)+pow(n%10,3)==n){
printf("Broj je Armstrongov\n");
}
else {
printf("Broj nije Armstrongov\n");
}
return 0;
}
