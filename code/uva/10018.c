#include <stdio.h>
#include<string.h>
char *strrev (char *str)
{
  int i;
  int len = 0;
  char c;
  if (!str)
    return NULL;
  while(str[len] != '\0'){
    len++;
  }
  for(i = 0; i < (len/2); i++)
  {
    c = str[i];
    str [i] = str[len - i - 1];
    str[len - i - 1] = c;
  }
  return str;
}
int main() {
int t,i,c;
unsigned long n,j,rev,sum;
char num[100],s[100];
scanf("%d",&t);
for(i=1;i<=t;i++) {
scanf("%lu",&n);
c=0;
while(!0) {
sprintf(num,"%lu",n);
strrev(num);
sscanf(num,"%lu",&rev);
sum=n+rev;
sprintf(sum,"%lu",s);
c++;
if(strcmp(s,strrev(s))==0) {
	printf("%d %lu\n",c,sum);
			}
n=sum;
		}
	}	
return 0;	
}
