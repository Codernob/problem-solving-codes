#include <iostream>
using namespace std;
int hcf(int x,int y) {
return y==0?x:hcf(y,x%y);
	}
int main() {
int N,i,j,a[1000000],max=0,lcm;	
cin>>N;
for(i=0;i<N;i++) {
cin>>a[i];
	}
for(i=0;i<N;i++) {
	for(j=0;j<N;j++) {
lcm=(a[i]*a[j])/hcf(a[i],a[j]);
if(lcm>max) max=lcm;
		}
	}
cout<<max<<endl;	
return 0;	
}
