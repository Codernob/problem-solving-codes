#include <iostream>
#include <string>
using namespace std;
int main() {
int a,b,n,i,f=0;	
scanf("%d %d %d",&a,&b,&n);	
for(i=0;i<10;i++) {
	a=(a*10)+i;
	if(a%b==0) { f++; break; }
	else a/=10;
		}
if(f==0) printf("-1\n");
else {
	string ans=to_string(a);
	for(i=0;i<n-1;i++) {
		ans+="0";
		}
	cout<<ans<<"\n";
	}
return 0;
	}