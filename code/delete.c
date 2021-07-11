#include<stdio.h>
int main() {
int i,n,loc,a[50]={0},b[50]={0};
printf("enter length of array:");
scanf("%d",&n);
printf("enter array: ");
for(i=0;i<n;i++) scanf("%d",&a[i]);
printf("enter location: ");
scanf("%d",&loc);
for(i=0;i<loc;i++) b[i]=a[i];
for(i=loc;i<n;i++) b[i-1]=a[i];
for(i=0;i<n-1;i++) printf("%d ",b[i]);
}
