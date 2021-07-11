#include<stdio.h>
#include <string.h>
int main() {
int i,upr=0,lwr=0,len;
char s[1000];
scanf("%s",s);
len=strlen(s);
for(i=0;i<len;i++) {
if(s[i]>=65 && s[i]<=90) upr++;
if(s[i]>=97 && s[i]<=122) lwr++;
	}
if(upr>lwr) {
for(i=0;i<len;i++) {
if(s[i]>=97 && s[i]<=122) s[i]-=32;
		}
	}
else  {
for(i=0;i<len;i++) {
if(s[i]>=65 && s[i]<=90) s[i]+=32;
		}
	}
printf("%s\n",s);
return 0;	
}
