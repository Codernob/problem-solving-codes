#include <iostream>
using namespace std;
int main() {
int i,t,x,y,left=0,right=0;
cin>>t;
for(i=0;i<t;i++) {
cin>>x>>y;	
if(x>0) right++;	
else left++;	
}		
if(right==1 || left==1 || right==0 || left==0) cout<<"Yes\n";
else cout<<"No\n";	
return 0;	
}
