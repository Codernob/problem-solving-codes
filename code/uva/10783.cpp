#include<iostream>
using namespace std;
int main() {
int i,j,t,n1,n2,sum;
cin>>t;
for(i=1;i<=t;i++) {
sum=0;
cin>>n1>>n2;
for(j=n1;j<=n2;j++) {
	if(j%2!=0) sum=sum+j;
		}
	cout<<"Case "<<i<<": "<<sum<<endl;
	}
return 0;
}
