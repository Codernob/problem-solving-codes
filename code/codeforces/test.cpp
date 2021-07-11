#include<iostream>
using namespace std;
int gcd(int x,int y) {
int r;
while(y>0) {
r=x%y;
x=y;
y=r;
		}
return x;
	}
int lcf(int x,int y) {
return (x*y)/gcd(x,y);
	}
int main() {
cout<<gcd(15,35);
}
