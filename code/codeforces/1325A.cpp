#include<iostream>
using namespace std;
int gcd(int x,int y) {
return y==0?x:gcd(y,x%y);
}
int main() {
int t,x,i,j,GCD;
cin>>t;
for(i=1;i<=t;i++) {
cin>>x;
for(j=1;j<=x;j++) {
    GCD=gcd(j,x-j);
	if((GCD+(j*(x-j))/GCD)==x) { cout<<j<<" "<<x-j<<endl; j=x+1; }
		}
	}
}
