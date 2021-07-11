#include <stdio.h>
#include <string.h>
int main() {
int i,j,year,t,idx,c1,c2,c3,c4;
char temp[10];
char f;	
scanf("%d",&year);
year++;
while(!0) {
t=year;
for(idx=0;idx<4;idx++) {
	temp[idx]=(year%10)+'0';
	year=year/10;
		}
year=t;
temp[4]='\0';
c1=c2=c3=c4=0;
for(i=0;i<4;i++) {
if(temp[0]==temp[i]) c1++;
		}
for(i=0;i<4;i++) {
if(temp[1]==temp[i]) c2++;
		}
for(i=0;i<4;i++) {
if(temp[2]==temp[i]) c3++;
		}
for(i=0;i<4;i++) {
if(temp[3]==temp[i]) c4++;
		}
if(c1==1 && c2==1 && c3==1 && c4==1) break;
year++;
	}
printf("%d\n",t);
return 0;	
}
