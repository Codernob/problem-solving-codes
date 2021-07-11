#include <iostream>
using namespace std;
int main() {
int i,j,t,n,k,a[10000],c;	
cin>>t;	
for(i=1;i<=t;i++) {	
cin>>n>>k;
c=0;
for(j=0;j<n;j++) {
cin>>a[j]; if(a[j]<=0) c++;		
		}
if(c>=k) cout<<"NO\n";
else cout<<"YES\n";
	}	
return 0;	
}