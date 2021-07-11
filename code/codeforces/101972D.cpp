#include<iostream>
using namespace std;
int main() {
int i,t,n,x,y,b,w;
cin>>t;
for(i=1;i<=t;i++) {
	cin>>n>>x>>y;
	b=(n/2)+1;
	w=n-b;
if(b<=x && w<=y) cout<<"YES"<<endl;
else cout<<"NO"<<endl;	
	}
}
