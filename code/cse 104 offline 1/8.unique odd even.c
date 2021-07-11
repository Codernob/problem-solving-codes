#include<stdio.h>
int main() {
int i,n,j,flag,a[100]={0},u[100]={0},e[100]={0},o[100]={0},m=0,k=0,l=0;
scanf("%d",&n);
for(i=0;i<n;i++) scanf("%d",&a[i]);
for(i=0;i<n;i++) {
	flag=0;
	for(j=i+1;j<n;j++) {
	if(a[i]==a[j]) flag++;
		}
	if(flag==0) {
	u[m++]=a[i];
	if(a[i]%2==0) e[k++]=a[i];
	else o[l++]=a[i];
		}	
	}
	printf("unique numbers:");
	for(i=0;i<m;i++) {
		if(u[i]==0) break;
		printf("%d ",u[i]);
		}
	printf("\nunique even numbers:");
	for(i=0;i<k;i++) {
		if(e[i]==0) break;
		printf("%d ",e[i]);
		}
	printf("\nunique odd numbers:");
	for(i=0;i<l;i++) {
		if(o[i]==0) break;
		printf("%d ",o[i]);
		}
}
