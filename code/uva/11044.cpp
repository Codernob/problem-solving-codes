#include <iostream>
using namespace std;
int main() {
int t,i,n,m,mul;
cin>>t;
for(i=0;i<t;i++) {
cin>>n>>m;	
mul=((n-2)*(m-2))/9;	
if(mul%2==0) mul+=0;	
else mul+=1;
mul+=2;
cout<<mul<<endl;	
	}	
return 0;	
}