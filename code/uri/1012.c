#include <stdio.h>
int main() {
double a,b,c;
scanf("%lf %lf %lf",&a,&b,&c);
printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",0.5*a*c,3.14159*c*c,0.5*c*(a+b),b*b,a*b);
}