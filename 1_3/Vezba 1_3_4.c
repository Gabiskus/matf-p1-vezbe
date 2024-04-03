#include <stdio.h>

int main() {
int n, m;
printf("Unesite granica intervala: ");
scanf("%d %d", &n, &m);

int i = n;
do {
printf("%d ", i);
i++;
} while(i<=m);
printf("\n");
return 0;
}
/*
for (int i  = n; i<=m; i++) {
printf("%d ", i);
}
int i = n;
while (i<=m) {
printf("%d ", i);
i++;
}


*/





