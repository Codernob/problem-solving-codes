#include<bits/stdc++.h>
using namespace std;
int linearSearch(int a[],int s,int t) {
for(int i=0;i<s;i++) {
	if(a[i]==t) return i;
		}
	return -1;
	}
int main() {
int n,q,a[100000],i,j,t=1,idx,query;	
while(!0) {	
scanf("%d %d",&n,&q);	
if(n==0 && q==0) break;
printf("CASE# %d:\n",t++);
for(i=0;i<n;i++) scanf("%d",&a[i]);	
sort(a,a+n);
for(j=0;j<q;j++) {
scanf("%d",&query);
idx=linearSearch(a,n,query);
if(idx==-1) printf("%d not found\n",query);
else printf("%d found at %d\n",query,idx+1);
		}
	}	
return 0;	
}
