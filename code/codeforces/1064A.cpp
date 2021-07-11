#include <iostream>
using namespace std;
int main() {
int a,b,c,ans=0;
cin>>a>>b>>c;
if(a+b<=c) ans+=c-a-b+1;
if(b+c<=a) ans+=a-b-c+1;
if(c+a<=b) ans+=b-c-a+1;
cout<<ans<<endl;
return 0;	
}
