#include <iostream>
using namespace std;
int main() {
int t,i,m,l;	
scanf("%d",&t);	
for(i=1;i<=t;i++) {	
scanf("%d %d",&m,&l);	
printf("Case %d: %d\n",i,abs(m-l)*4+11+m*4+8);	
	}	
return 0;
}