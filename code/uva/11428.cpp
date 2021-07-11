#include <iostream>
using namespace std;
int main() {
int n,x,y,c;
while(!0) {
cin>>n;
if(n==0) break;
c=0;
for(x=1;x<n && c==0;x++) {
	for(y=1;y<n && c==0;y++) {
		if(x*x*x-y*y*y==n) {
			c=1;
			cout<<x<<" "<<y<<endl;
			}
		}
	}
if(c==0) cout<<"No solution\n";
	}
return 0;	
}