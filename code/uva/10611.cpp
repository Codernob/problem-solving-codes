#include <bits/stdc++.h>
using namespace std;
int main() {
int n,m,i,j,a[1000000],query;
bool found1,found2;
while(scanf("%d",&n)!=EOF) {	
for(i=0;i<n;i++) scanf("%d",&a[i]);
scanf("%d",&m);
for(i=0;i<m;i++) {
scanf("%d",&query);
found1=false; found2=false;
for(j=n-1;j>=0;j--) {
	if(a[j]<query) {
		found1=true;
		break;
		}
	}
if(found1==true) printf("%d ",a[j]);
else printf("X ");
for(j=0;j<n;j++) {
	if(a[j]>query) {
		found2=true;
		break;
		}
	}
if(found2==true) printf("%d\n",a[j]);
else printf("X\n");
		}	
	}	
return 0;	
}