#include <iostream>
using namespace std;
unsigned long long factorial(unsigned long long n) {
unsigned long long i,f=1;
for(i=1;i<=n;i++) { 
	f=(f*i);
	}
return f;
	}
int main() {
unsigned long long num,fact;
while(scanf("%llu",&num)!=EOF) {
if(num>13) cout<<"Overflow!\n";
else {
fact=factorial(num);
if(fact<10000) cout<<"Underflow!\n";
else cout<<fact<<endl;
		}
	}
return 0;
}
