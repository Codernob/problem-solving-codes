#include <iostream>
using namespace std;
int main() {
int i,t;
unsigned long long n;
cin>>t;
for(i=1;i<=t;i++) {
cin>>n;
cout<<(((n%1000000007)*(n%1000000007))%1000000007)<<endl;
	}
}
