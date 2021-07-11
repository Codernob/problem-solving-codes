#include <iostream>
using namespace std;
int main() {
int n,b,x,t,i,c=1;	
while(!0) {
cin>>n;	
if(n==0) break;
b=0; t=0;
for(i=0;i<n;i++) {
	cin>>x;
	if(x>0) b++;
	if(x==0) t++;
	}
cout<<"Case "<<c<<": "<<b-t<<endl;
c++;	
	}	
return 0;	
}