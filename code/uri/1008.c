#include <stdio.h>
int main() {
int num,wh;
float apwh,sal;
scanf("%d",&num);
scanf("%d",&wh);
scanf("%f",&apwh);
sal=wh*apwh;
printf("NUMBER = %d\n",num);
printf("SALARY = U$ %.2f\n",sal);
}