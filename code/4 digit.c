#include<stdio.h>
int main() {
int i,j;
int d1,d2,d3,d4;
for(i=1000;i<3333;i++) {
int num=i,c1=0,c2=0,c3=0,c4=0;
while(num>=1) {
if(num>999 && num<=9999) d1=num%10;
else if(num>99 && num<=999) 
	d2=num%10;
else if(num>9 && num<=99)
	 d3=num%10;
else if(num>=1 && num<=9)
	 d4=num%10; 
		num=num/10;
			}
int a[4];
a[0]=d4;
a[1]=d3;
a[2]=d2;
a[3]=d1;
for(j=0;j<=3;j++) 
			{ if(a[j]==0) c1++; }
for(j=0;j<3;j++) 
			{ if(a[j]==1) c2++; }
for(j=0;j<3;j++) 
			{ if(a[j]==2) c3++; }
for(j=0;j<3;j++) 
			{ if(a[j]==3) c4++; }
if(d4==c1 && d3==c2 && d2==c3 && d1==c4) printf("%d\n",i);
}
}

		
		
			
