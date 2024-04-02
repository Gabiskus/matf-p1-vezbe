#include <stdio.h>

int main() {
int k,l,m,n;
printf("Unesite (k,l): ");
scanf("%d %d", &k,&l);
printf("Unesite (m,n): ");
scanf("%d %d", &m,&n);
if (k <= 0 || k >=9 || l <= 0 || l >=9 || m <= 0 || m >=9 || n <= 0 || n >=9) {printf("Greska: neispravna pozicija \n"); return 1;}
if (((k % 2 == 1 && l%2== 1)||(k % 2 == 0 && l%2== 0))  && ((m % 2 == 1 && n % 2 == 1) || (m % 2 == 0 && n % 2 == 0))) {
printf("Polja su iste boje.\n");
}
else if  (((k % 2 == 0 && l%2== 1)||(k % 2 == 1 && l%2== 0))  && ((m % 2 == 0 && n % 2 == 1) || (m % 2 == 1 && n % 2 == 0))) {
printf("Polja su iste boje.\n");
}
else {
printf("Polja su razlicite boje.\n");
}
if ( k == m || l == n || (k-m == l-n)) {
printf("Kraljica sa (%d,%d) ugrozava (%d,%d)\n", k,l,m,n);
}
else {
printf("Kraljica sa (%d,%d) ne ugrozava (%d,%d)\n", k,l,m,n);
}

if ((m - 1 == k && n - 2 == l) || (m - 1 == k && n + 2 == l) || (m + 1 == k && n + 2 == l) || (m + 1 == k && n - 2 == l) || (m - 2 == k && n - 1 == l) || (m - 2 == k && n + 1 == l) || (m + 2 == k && n + 1 == l) || (m + 2 == k && n - 1 == l)) {
printf("Konj sa (%d,%d) ugrozava (%d,%d)\n", k,l,m,n);
}
else {
printf("Konj sa (%d,%d) ne ugrozava (%d,%d)\n", k,l,m,n);
}
return 0;
}
