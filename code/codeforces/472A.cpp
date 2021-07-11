#include <iostream>
using namespace std;
int isprime(int n) {
int i;
if(n==1) return 0;
for(i=2;i*i<=n;i++) if(n%i==0) return 0;
return 1;	
}
int main() {
int input,i=0,num;
cin>>input;
num=input;
while(!0) {
num--;
i++;
if(num+i==input && isprime(num)==0 && isprime(i)==0) { 
	cout<<num<<" "<<i<<"\n"; break;
		 }
	}
return 0;
}
