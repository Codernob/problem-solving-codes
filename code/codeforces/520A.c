#include <stdio.h>
int main() {
int len,i,j,a[26]={0},f=0;
char str[1000];
scanf("%d\n%s",&len,str);
for(i=0;i<len;i++) {
for(j=0;j<26;j++) {
if(j+65==str[i] || j+97==str[i]) a[j]=1;
		}
	}
for(j=0;j<26;j++) {
if(a[j]==0) { f=1; break; }
	}
if(f==0) printf("YES\n");
else printf("NO\n");
return 0;	
}
