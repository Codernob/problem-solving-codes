#include <iostream>
#include <string>
using namespace std;
int main() {
string song[16]={ "Happy","birthday",
"to","you","Happy","birthday","to","you",
"Happy","birthday","to","Rujia","Happy",
"birthday","to","you"};
int n,i,j,flag=0;
cin>>n;	
string members[n];
for(i=0;i<n;i++) cin>>members[i];
i=j=0;
while(!0) {
cout<<members[i]<<": "<<song[j]<<endl;
i++; j++;
if(i==n) { i=0; flag=1; }
if(j==16 && flag==1) break;
if(j==16) j=0;
	}	
return 0;	
}
