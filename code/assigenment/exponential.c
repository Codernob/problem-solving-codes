#include<stdio.h>
int main() {
	int x,i;
	float e=2.71,s=1;
	scanf("%d",&x);
	for(i=1;i<=x;i++) s=s*e;
	printf("%f",s);
}
