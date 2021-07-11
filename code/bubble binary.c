#include<stdio.h>
int main() {
int i,j,n,target,temp,counter=0;
scanf("%d %d",&n,&target);
int a[n];
for(i=0;i<n;i++) scanf("%d",&a[i]);
for(i=0;i<n;i++) {
for(j=0;j<n-1;j++) {
if(a[j]>a[j+1]) {
	temp=a[j];
	a[j]=a[j+1];
	a[j+1]=temp;
		}
	}
}
int first=0,last=n-1,mid;
while(first<=last) {
mid=(first+last)/2;
if(a[mid]>target) last=mid-1;
else if(a[mid]<target) first=mid+1;
else { counter=1; }
}
if(counter==1) printf("found"); 
else printf("not found");
}

