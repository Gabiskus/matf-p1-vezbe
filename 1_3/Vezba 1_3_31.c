#include <stdio.h>
#include <ctype.h>
int main () {
    char c;
    while (c != '.') {
        scanf("%c", &c);
        if (islower(c)) {
            printf("%c", toupper(c));
        }
        else if (isupper(c)) {
            printf("%c", tolower(c));
        }
        else {
            printf("%c",c);
        }
    }   

}