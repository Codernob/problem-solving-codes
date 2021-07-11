#include <iostream>
using namespace std;
int main() {
int x,a,b,flag=0;
cin>>x;	
for(a=1;a<=x;a++) {	
	for(b=1;b<=x;b++) {
	if(a%b==0 && a*b>x && (a/b)<x) { 
		cout<<a<<" "<<b<<"\n";
		flag=1; 
		a=b=x+1;
			}
		}
	}
if(flag==0) cout<<"-1\n";
return 0;	
}
