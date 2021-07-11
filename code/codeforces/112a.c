#include<stdio.h>
int slen(char s[]) {
int l;
for(l=0;s[l]!='\0';l++);
return l;	
}
int main() {
int i,j,len,f=0;
char s1[1000],s2[1000];	
scanf("%s\n%s",s1,s2);
len=slen(s1);
for(i=0;i<len;i++) {
if(s1[i]>=65 && s1[i]<=90) s1[i]+=32;
if(s2[i]>=65 && s2[i]<=90) s2[i]+=32;
if(s1[i]>s2[i]) { 
	f=1; printf("1\n"); break;
	 	}
if(s1[i]<s2[i]) {
	 f=1; printf("-1\n"); break;
	  	}
	}
if(f==0) printf("0\n");
return 0;
}
