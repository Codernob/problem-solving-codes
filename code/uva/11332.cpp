#include<iostream>
using namespace std;
int sumdigits(int n) {
int sum=0;
while(n!=0) {
	sum=sum+n%10;
	n=n/10;
		}
return sum;
	}
void g(int n) {
	if(n/10!=0) {
		cout<<sumdigits(n)<<endl;
		g(sumdigits(n));
		}
	else cout<<n<<endl;
	}
int main() {
int n;
while(!0) {
	cin>>n;
	if(n==0) break;
	g(n);
	}
return 0;
}
