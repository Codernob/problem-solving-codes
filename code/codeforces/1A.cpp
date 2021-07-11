#include<iostream>
using namespace std;
int main() {
int n,m,a,sq,c=0;
cin>>n>>m>>a;
sq=n*m;
while(sq>0) {
	sq-=a*a;
	c++;
	}
cout<<c<<endl;
return 0;
}
