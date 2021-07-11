#include<stdio.h>
int main()
{
	int i,num,d1,d2,d3,d4;
	scanf("%d",&num);
	while(num>=1) {
		if(num>999 && num<=9999) d1=num%10;
		else if(num>99 && num<=999) d2=num%10;
		else if(num>9 && num<=99) d3=num%10;
		else if(num>=1 && num<=9) d4=num%10;
		num=num/10;
		 }
	printf("%d %d %d %d",d1,d2,d3,d4);
}
		 
