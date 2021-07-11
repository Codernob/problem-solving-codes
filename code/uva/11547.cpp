#include <iostream>
using namespace std;
int main() {
int t,n,i;
cin>>t;
for(i=1;i<=t;i++) {
	cin>>n;
	n*=567;
	n/=9;
	n+=7492;
	n*=235;
	n/=47;
	n-=498;
	n=n/10;
	n=n%10;
	if(n<0) n=-n;
	cout<<n<<endl;
	}
return 0;
}
