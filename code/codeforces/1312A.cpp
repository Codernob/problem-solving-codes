#include <iostream>
using namespace std;
int main() {
int t,i,n,m;
cin>>t;
for(i=1;i<=t;i++) {
cin>>n>>m;
if(n%m==0) printf("YES\n");
else printf("NO\n");
	}
return 0;	
}
