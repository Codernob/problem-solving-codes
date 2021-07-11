#include<iostream>
using namespace std;
int gcd(int a,int b) {
if(a<b) swap(a,b);
int r=a%b;
if(r==0) return b;	
return gcd(b,r);	
	}
int main() {
cout<<gcd(35,15);
}