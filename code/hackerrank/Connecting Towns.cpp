#include <iostream>
using namespace std;
int main() {
int t,i,n,j;
cin>>t;
for(i=1;i<=t;i++) {
cin>>n;
int T[n-1];
for(j=0;j<n-1;j++) cin>>T[j];
int m=1;
for(j=0;j<n-1;j++) m=(m*T[j])%1234567;
cout<<m<<endl;
	}
}
