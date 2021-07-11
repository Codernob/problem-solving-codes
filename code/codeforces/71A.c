#include <stdio.h>
#include <string.h>
/*int slen(char *p) {
int i;
while(*p!='\0') i++;
return i;	
}*/
int main() {
int i,t,n;
char s[500],f,l;
scanf("%d",&t);
for(i=0;i<t;i++) {
scanf("%s",s);
if(strlen(s)<=10) {
	printf("%s\n",s); continue;
	}
f=s[0]; l=s[strlen(s)-1]; n=strlen(s)-2;
printf("%c%d%c\n",f,l,n);	
		}
return 0;
}
