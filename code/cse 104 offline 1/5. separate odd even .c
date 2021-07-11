#include<stdio.h>
int main()
{
	int i,n,e[100]={0},o[100]={0},l=0,m=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++) 
	scanf("%d",&a[i]);
	for(i=0;i<n;i++) {
	if(a[i]%2==0) 
		{ e[l]=a[i]; l++; }
	else { o[m]=a[i]; m++; }
	}
	printf("\neven numbers: ");
	for(i=0;i<n;i++) 
	{ if(e[i]==0) break;
		printf("%d ",e[i]);
		 }
	printf("\nodd numbers: ");
	for(i=0;i<n;i++)
	{ if(o[i]==0) break;
	  printf("%d ",o[i]); }	
}
