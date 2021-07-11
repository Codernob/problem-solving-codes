#include <stdio.h>
int main() {
char name[100];
double sal,sale,total;
scanf("%s",&name);
scanf("%lf",&sal);
scanf("%lf",&sale);
total=sal+(sale*15.0*(1.0/100.0));
printf("TOTAL = R$ %.2lf\n",total);	
}