#include <stdio.h>

int main() {
char n;
printf("Unesite karakter: ");
scanf("%c", &n);
printf("Uneti karakter: %c\n", n);
printf("ASCII kod: %d\n", n);
if (n>='a' && n<='z') {
printf("Odgovarajuce veliko slovo: %c\n", n-32);
printf("ASCII kod: %d\n", n-32);
}
if (n>='A' && n<='Z') {
printf("Odgovarajuce malo slovo: %c\n", n+32);
printf("ASCII kod: %d\n", n+32);
}
return 0;
}
