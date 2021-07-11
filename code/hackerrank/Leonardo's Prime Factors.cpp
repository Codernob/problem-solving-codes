#include <iostream>
using namespace std;
int primes[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101};
int ans(long long int n) {
long long int mul=1;
int i;
for(i=0;i<23;i++) {
	mul=mul*primes[i];
	if(mul>n) return i;
	}
}
int main() {
int t,i;
long long int num;
cin>>t;
for(i=1;i<=t;i++) {
	cin>>num;
	cout<<ans(num)<<endl;
	}
}
