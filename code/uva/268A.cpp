#include <iostream>
using namespace std;
int main() {
int i,j,n,a[100],b[100],c=0;
cin>>n;
for(i=0;i<n;i++) cin>>a[i]>>b[i];
for(i=0;i<n;i++) {
	for(j=0;j<n;j++) {
	if(a[i]==b[j]) c++;
		}
}
cout<<c<<"\n";
return 0;	
}
