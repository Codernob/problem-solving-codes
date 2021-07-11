#include <iostream>
using namespace std;
int main() {
int a,b;	
cin>>a>>b;
int c=a>b?a:b;
while(!0) {
	if(c%a==0 && c%b==0) {
		 cout<<c<<endl;
		 break; 
		 }
	c++;
	}
return 0;	
}