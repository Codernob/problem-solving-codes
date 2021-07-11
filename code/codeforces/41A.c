#include <stdio.h>
int slen(char *p) {
int l;
for(l=0;*(p)!='\0';l++,p++);
return l;	
}
int main() {
int i,len,f=0;
char s1[1000],s2[1000];
scanf("%s\n%s",s1,s2);
len=slen(s1);
for(i=0;i<len;i++) {
if(s1[i]!=s2[len-i-1]) { f=1; break; }
	}
if(f==0) printf("YES\n");
else printf("NO\n");
return 0;
}
