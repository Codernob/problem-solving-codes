#include <iostream>
using namespace std;
int main() {
int t=1,i,n,s,avg,ans,h[100];
while(!0) {
cin>>n;
if(n==0) break;
s=0;
for(i=0;i<n;i++) { cin>>h[i]; s+=h[i]; }
avg=s/n;
ans=0;
for(i=0;i<n;i++) {
	if(h[i]>avg) ans=ans+(h[i]-avg);
		}	
cout<<"Set "<<"#"<<t<<endl;
cout<<"The minimum number of moves is "<<ans<<"."<<endl;
cout<<endl;
t++;
	}	
return 0;
}
