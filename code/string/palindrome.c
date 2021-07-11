#include<stdio.h>
int length(char *p) {
	int i;
	for(i=0;*p!='\0';i++,p++);
	return i;
}
main(){ 
int i,j,c=0;
char s[20];
gets(s);
int l=length(s);
for(i=0,j=l-1;i<l;i++,j--) {
	if(s[i]!=s[j]) {
		c++; break;
		}
	}
if(c==0) printf("palindrome");
else printf("not palindrome");
}
