#include <stdio.h>
#include <math.h>

int main () {
    double x, eps, S = 0, p = 1;
    printf("Unesite x: ");
    scanf("%lf", &x);
    printf("Unesite tacnost eps: ");
    scanf("%lf", &eps);
    int i = 0;
    while(p > eps)
    {
        S += p;
        p *= x/(i+1);
        i++;
    }
    printf("S = %lf\n", S);
    return 0;
}