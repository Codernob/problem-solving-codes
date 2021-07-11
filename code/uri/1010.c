#include<stdio.h>
int main() {
int c1,c2,a1,a2;
float p1,p2,total;
scanf("%d %d %f",&c1,&a1,&p1);
scanf("%d %d %f",&c2,&a2,&p2);
total=(a1*p1)+(a2*p2);
printf("VALOR A PAGAR: R$ %.2f\n",total);
}