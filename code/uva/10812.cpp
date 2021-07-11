#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
long long int i,t,s,d,a,b;
cin>>t;
for(i=1;i<=t;i++) {
cin>>s>>d;
if((s==0 && d!=0) || s<d) 
	cout<<"impossible\n";
else {
	a=(d+s)/2;
	b=s-a;
	if(a+b==s && abs(a-b)==d) {
	cout<<a<<" "<<b<<endl; 			
		}
	else cout<<"impossible\n";
		}
	}
return 0;
}
