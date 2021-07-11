#include<iostream>
using namespace std;
int main() {
int i,j,t,n,k,p,c;
cin>>t;
for(i=1;i<=t;i++) {
cin>>n>>k>>p;
c=0;
while(!0) {
if(c==p) break;
c++; 
if(k==n) k=1;
else k++;
		}
cout<<"Case "<<i<<": "<<k<<endl;
    }
return 0;
}