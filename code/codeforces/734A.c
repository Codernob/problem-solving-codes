#include <stdio.h>
int main() {
int a=0,d=0,i,len;
char g[1000000];
scanf("%d\n%s",&len,g);
for(i=0;i<len;i++) {
if(g[i]=='A') a++;
if(g[i]=='D') d++;
	}
if(a>d) printf("Anton\n");
else if(a<d) printf("Danik\n");
else printf("Friendship\n");
return 0;	
}
