#include<stdio.h>
int main() {
int i,n=8,temp;
int a[8]={1,9,2,4,6,1,6,8};
temp=a[n-1];
for(i=n-1;i>=0;i--) {
	a[i]=a[i-1];
}
for(i=0;i<n;i++) printf("%d ",a[i]);
}
