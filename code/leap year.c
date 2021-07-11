#include<stdio.h>
int ly(int y) {
int flag;
if(y%400==0) return 1;
else if(y%4==0 && y%100!=0) return 1;
else return 0;	
}
int main() {
	int n;
	printf("enter year:");
	scanf("%d",&n);
	int flag=ly(n);
	if(flag==0) printf("%d is not leap year",n);
	else printf("%d is leap year",n);
}
