#include<stdio.h>
int main() {
int i,j,n,flag;
scanf("%d",&n);
int a[n],store[n];
for(i=0;i<n;i++) scanf("%d",&a[i]);
int k=0;
for(i=0;i<n;i++) {
flag=0;
for(j=i+1;j<n;j++) {
	if(a[i]==a[j]) flag++;
        }
if(flag==0) store[k++]=a[i];
    }
for(i=0;i<k;i++) printf("%d ",store[i]);
}
