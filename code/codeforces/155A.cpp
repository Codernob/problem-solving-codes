#include <iostream>
using namespace std;
int main() {
int i,j,n,a[10000],awesome=0,maxc=0,minc=0;
cin>>n;
for(i=0;i<n;i++) cin>>a[i];
for(i=0;i<n;i++) cout<<a[i]<<" ";
cout<<"\n";
for(i=1;i<n;i++) {
maxc=0; minc=0;
for(j=i-1;j>=0;j--) {
if(a[i]<a[j]) maxc++;
	}
for(j=i-1;j>=0;j--) {
if(a[i]>a[j]) minc++;
	}
if(maxc==i || minc==i) awesome++;
}
cout<<awesome<<"\n";	
return 0;	
}
