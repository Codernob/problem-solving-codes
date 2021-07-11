#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
int i,even,odd,num;
char str[10000];
while(!0) {
gets(str);
num=atoi(str);
if(num==0) break;
even=0; odd=0;
for(i=strlen(str)-1;i>=0;i-=2) 
		even=even+str[i]-'0';
for(i=strlen(str)-2;i>=0;i-=2)
		odd=odd+str[i]-'0';
/*printf("even=%d odd=%d\n",even,odd);*/
if((even-odd)%11==0) 
printf("%s is a multiple of 11.\n",str);
else 
printf("%s is not a multiple of 11.\n",str);
	}
return 0;
}
