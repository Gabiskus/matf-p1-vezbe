#include <stdio.h>

int main () {
int g, m, d;
printf("Unesite datum: ");
scanf("%d.%d.%d.", &d, &m, &g);
if (d <1 || d > 31 || m > 12 || m < 1 || g < 0) {
printf("Datum nije korektan.\n");
return 1;
}
if ((g % 4 == 0 && g % 100 != 0 || g%400 == 0) && m == 2 && d > 29) {
printf("Datum nije korektan.\n");
return 1;
}
switch(m) {
case 1:
if (d>31) {printf("Datum nije korektan.\n");
return 1;}
break;
case 2:
if (d>28) {printf("Datum nije korektan.\n");
return 1;}
break;
case 3:
if (d>31) {printf("Datum nije korektan.\n");
return 1;}
break;
case 4:
if (d>30) {printf("Datum nije korektan.\n");
return 1;}
break;
case 5:
if (d>31) {printf("Datum nije korektan.\n");
return 1;}
break;
case 6:
if (d>30) {printf("Datum nije korektan.\n");
return 1;}
break;
case 7:
if (d>31) {printf("Datum nije korektan.\n");
return 1;}
break;
case 8:
if (d>31) {printf("Datum nije korektan.\n");
return 1;}
break;
case 9:
if (d>30) {printf("Datum nije korektan.\n");
return 1;}
break;
case 10:
if (d>31) {printf("Datum nije korektan.\n");
return 1;}
break;
case 11:
if (d>30) {printf("Datum nije korektan.\n");
return 1;}
break;
case 12:
if (d>31) {printf("Datum nije korektan.\n");
return 1;}
break;
}
printf("Datum je korektan.\n");
return 0;
}


