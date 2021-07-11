#include <iostream>
using namespace std;
int main() {
int t,f,s,n,e,fp,i,j;
cin>>t;
while(scanf("%d",&f)!=EOF) {
	fp=0;
	for(i=1;i<=f;i++) {
		cin>>s>>n>>e;
		fp=fp+s*e;
		}
	cout<<fp<<endl;
	}
return 0;
}