#include<iostream>
using namespace std;
int main() {
int t,i,a,b,c,d;
for(i=1;i<=t;i++) {
cin>>a>>b>>c>>d;
if(a+b>c+d) cout<<1<<endl;
else if(a+b<c+d) cout<<2<<endl;
else if(a+b==c+d) {
	if(c>b) cout<<1<<endl;
	else if(c<b) cout<<2<<endl;
	else cout<<-1<<endl;
		}
	}
}
