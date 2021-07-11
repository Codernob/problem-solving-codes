#include <iostream>
using namespace std;
int main() {
int t,i,j,c,mile,juice;
cin>>t;	
for(i=1;i<=t;i++) {
cin>>c;
int d[c];
for(j=0;j<c;j++) cin>>d[j];
mile=0; juice=0;
for(j=0;j<c;j++) {
mile+=(((d[j]/30)+1)*10);
juice+=(((d[j]/60)+1)*15);
		}
if(mile<juice) cout<<"Case "<<i<<": Mile "<<mile<<endl;
else if(juice<mile) cout<<"Case "<<i<<": Juice "<<juice<<endl;
else cout<<"Case "<<i<<": Mile Juice "<<mile<<endl;
	}	
return 0;	
}
