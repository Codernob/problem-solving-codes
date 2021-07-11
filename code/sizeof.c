#include<stdio.h>
int main() {
int i;
float f=0.12345678;
double d=1.2345678912345678912345678912345;
char c;
printf("int %d ",sizeof(i));
printf("float %d %f ",sizeof(f),f);
printf("\ndouble %d %llf",sizeof(d),d);
printf("character %d ",sizeof(c));

}
