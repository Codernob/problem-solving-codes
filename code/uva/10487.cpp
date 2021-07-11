#include <bits/stdc++.h>
using namespace std;
int main() {
long long int n,m,a[1000000],b[1000000],c[1000000],i,j,q,C,min,idx,k=1;	
while(!0) {	
scanf("%lld",&n);
if(n==0) break;
printf("Case %lld:\n",k++);
for(i=0;i<n;i++) scanf("%lld",&a[i]);
C=0;
for(i=0;i<n-1;i++) {
	for(j=i+1;j<n;j++) b[C++]=a[i]+a[j];
	}
scanf("%lld",&m);
for(i=0;i<m;i++) {
scanf("%lld",&q);
min=INT_MIN;
idx=0;
for(j=0;j<C;j++) {
	c[j]=abs(b[j]-q);
	if(c[j]<min) { 
			min=c[j];
			idx=j;
			}
	}
printf("Closest sum to %lld is %lld.\n",q,b[idx]);
		}
	}
return 0;	
}
