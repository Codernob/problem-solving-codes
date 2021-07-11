#include <iostream>
using namespace std;
int main() {	
int t,i,s,j,sum,a[100000];	
scanf("%d",&t);
for(i=1;i<=t;i++) {
scanf("%d",&s);
sum=0;
for(j=0;j<s;j++) {
	scanf("%d",&a[j]);
	if(a[j]<0) a[j]=0;
	sum+=a[j];
	}
printf("Case %d: %d\n",i,sum);
}
return 0;	
	}