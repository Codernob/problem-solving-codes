#include <iostream>
using namespace std;
int main() {
int t,i,a,b,s;
cin>>t;	
for(i=1;i<=t;i++) {
cin>>a>>b;
cout<<(a%b==0?0:b-a%b)<<"\n";	
	}	
return 0;	
}
