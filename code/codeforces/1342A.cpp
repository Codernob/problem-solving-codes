#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
ull absolute(ull n1,ull n2) {
if(n1>n2) return n1-n2;
else return n2-n1;	
	}
ull minimum(ull n1,ull n2) {
if(n1>n2) return n2;
else return n1;	
	}
int main() {
ull x,y,a,b,t,i,ans1,ans2;
cin>>t;	
for(i=0;i<t;i++) {
cin>>x>>y>>a>>b;	
ans1=((absolute(x,y)*a)+(b*(minimum(x,y))));
ans2=((absolute(x,y)*a)+(2*minimum(x,y)*a));
cout<<minimum(ans1,ans2)<<endl;
	}
return 0;	
}