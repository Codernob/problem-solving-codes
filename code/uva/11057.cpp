#include <bits/stdc++.h>
using namespace std;
typedef struct record{
int book1;
int book2;
int difference;
	};
int main() {
int n,m,a[1000000],i,j,s,min,idx;
record records[10000000];
while(scanf("%d",&n)!=EOF) {	
for(i=0;i<n;i++) {
scanf("%d",&a[i]);
		}
scanf("%d",&m);
sort(a,a+n);
s=0;
for(i=0;i<n-1;i++) {
	for(j=i+1;j<n;j++) {
		if(a[i]+a[j]==m) {
			records[s].book1=a[i];
			records[s].book2=a[j];
			records[s++].difference=a[j]-a[i];
			}
		}
	if(a[i]>m) break;
	}
min=records[0].difference;
idx=0;
for(i=0;i<s;i++) {
	if(records[i].difference<min) {
		min=records[i].difference;
		idx=i;
		}
	}
printf("Peter should buy books whose prices are %d and %d.\n\n",records[idx].book1,records[idx].book2);
getchar();
	}	
return 0;	
}
