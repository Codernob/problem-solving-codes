#include <iostream>
using namespace std;
int main() {
int i,t,a,b,c;
cin>>t;
for(i=1;i<=t;i++) {
cin>>a>>b>>c;
if(a+b<=c || b+c<=a || c+a<=b || a<=0 || b<=0 || c<=0) {
cout<<"Case "<<i<<": Invalid\n";  }
else if(a==b && b==c && a==c) {
cout<<"Case "<<i<<": Equilateral\n";
	 }
else if((a==b && a!=c) || (b==c && a!=b) || (a==c && b!=a)) {
cout<<"Case "<<i<<": Isosceles\n";
	 }
else if(a!=b && b!=c && c!=a) {
cout<<"Case "<<i<<": Scalene\n";
	continue; }
	}
return 0;	
}