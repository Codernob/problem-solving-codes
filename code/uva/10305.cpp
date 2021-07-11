#include <iostream>
using namespace std;
int bsearch(int a[],int size,int target) {
int first=0,last=size-1,mid;
while(first<=last) {
	mid=(first+last)/2;
	if(a[mid]==target) return mid;
	else if(a[mid]>target) last=mid-1;
	else first=mid+1;
		}
return -1;
	}
int main() {
int n,m;
while(!0) {
scanf("%d %d",&n,&m);
if(n==0 && m==0) break;	
int a[n];
for(int i=0;i<n;i++) a[i]=i+1;
int t1,t2,p1,p2;
for(int i=1;i<=m;i++) {
scanf("%d %d",&t1,&t2);
p1=bsearch(a,n,t1);
p2=bsearch(a,n,t2);
if(p2<p1) swap(a[p1],a[p2]);
		}
for(int i=0;i<n;i++) cout<<a[i]<<" ";
	}	
return 0;
	}