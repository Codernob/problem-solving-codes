#include <iostream>
using namespace std;
int main() {
int i,j,t,c,rr,r;
cin>>t;
for(i=1;i<=t;i++) {
cin>>c>>rr;
r=1500;
int a[c];
for(j=0;j<c;j++) 
	{ cin>>a[j]; r=r+a[j];}
if(r==rr) cout<<"Correct\n";
else cout<<"Bug\n";
	}
}
