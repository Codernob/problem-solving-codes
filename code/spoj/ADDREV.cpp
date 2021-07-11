#include <iostream>
using namespace std;
typedef unsigned long long int dt;
dt reverse(dt n) {
dt rev=0;
while(n!=0) {
	rev=(rev*10)+n%10;
	n=n/10;
		}
return rev;
	}
int main() {
int N,i;
dt a,b;
cin>>N;
for(i=0;i<N;i++) {
cin>>a>>b;
cout<<reverse(reverse(a)+reverse(b))<<endl;	
	}
return 0;	
}
