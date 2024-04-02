#include <stdio.h>
int pdatum (int g, int m, int d);
int main () {
int g, m, d, p, f = 0;
printf("Unesite datum: ");
scanf("%d.%d.%d.", &d, &m, &g);
p = pdatum(g,m,d);
if ((g % 4 == 0 && g % 100 != 0 || g%400 == 0) && m == 3 && d == 1) {
f = 1;
}
if (p==1) {
printf("Datum nije korektan\n");
return 1;
}
else {
printf("Prethodni datum:\n");
switch(m) {
case 1:
if (d==31) {
printf("1.2.%d.\n", g);return 0;}
break;
case 2:
if (d==28 && f == 0) {
printf("1.3.%d.\n", g); return 0;}
if (d==29 && f == 1) {printf("1.3.%d.\n", g);
return 0;}
break;
case 3:
if (d==31) {printf("1.4.%d.\n", g);return 0;}
break;
case 4:
if (d==30) {
printf("1.5.%d.\n", g);return 0;}
break;
case 5:
if (d==31) {
printf("1.6.%d.\n", g);return 0;}
break;
case 6:
if (d==30) {
printf("1.7.%d.\n", g);return 0;}
break;
case 7:
if (d==31) {
printf("1.8.%d.\n", g);return 0;}
break;
case 8:
if (d==31) {
printf("1.9.%d.\n", g);return 0;}
break;
case 9:
if (d==30) {
printf("1.10.%d.\n", g);return 0;}
break;
case 10:
if (d==31) {
printf("1.11.%d.\n", g);return 0;}
break;
case 11:
if (d==30) {
printf("1.12.%d.\n", g);return 0;}
break;
case 12:
if (d==31) {
printf("1.1.%d.\n", g+1);
return 0;}
break;
}


}

printf("%d.%d.%d.\n",d+1,m,g);
return 0;
}

int pdatum(int g, int m, int d) {

if (d <1 || d > 31 || m > 12 || m < 1 || g < 0) {
return 1;
}
if ((g % 4 == 0 && g % 100 != 0 || g%400 == 0) && m == 2 && d > 29) {
return 1;
}
switch(m) {
case 1:
if (d>31) {
return 1;}
break;
case 2:
if (d>28) {
return 1;}
break;
case 3:
if (d>31) {
return 1;}
break;
case 4:
if (d>30) {
return 1;}
break;
case 5:
if (d>31) {
return 1;}
break;
case 6:
if (d>30) {
return 1;}
break;
case 7:
if (d>31) {
return 1;}
break;
case 8:
if (d>31) {
return 1;}
break;
case 9:
if (d>30) {
return 1;}
break;
case 10:
if (d>31) {
return 1;}
break;
case 11:
if (d>30) {
return 1;}
break;
case 12:
if (d>31) {
return 1;}
break;
}
return 0;
}
