#include<stdio.h>
int main() {
int low,high,mid,i,n,result,target;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++) scanf("%d",&a[i]);
scanf("%d",&target);
low=0; high=n-1; result=-1;
while(low<=high) {
mid=(low+high)/2;
if(target==a[mid]) {
	result=mid;
	high=mid+1;
	}
else if(target<a[mid]) high=mid-1;
else low=mid+1;
}
printf("%d found at %d",target,result);
}
