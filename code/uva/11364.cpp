#include <iostream>
using namespace std;
int main() {
int i,j,t,n,x,max,min;
double mid,ans;
cin>>t;
for(i=0;i<t;i++) {
cin>>n;
max=0; min=100;
for(j=0;j<n;j++) { 
	cin>>x;
	if(x>max) max=x;
	if(x<min) min=x;
		}
mid=max/2.0;
ans=((max-mid)*2.0)+((mid-min)*2.0);
cout<<ans<<"\n";
	}
return 0;	
}
