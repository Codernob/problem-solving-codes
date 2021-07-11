#include <iostream>
using namespace std;
int main() {
int cl,target,p,t=0;
while(++t) {
cin>>target;
if(target<0) break;
p=0;
cl=1;
while(cl<target) {
	cl+=cl;
	p++;
		}
cout<<"Case "<<t<<": "<<p<<endl;
	}
return 0;	
}