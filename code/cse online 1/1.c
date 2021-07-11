#include<stdio.h>
int main()
{
int i,m,n;
scanf("%d",&m);
int a[m];
for(i=0;i<m;i++) scanf("%d",&a[i]);
scanf("%d",&n);
int b[n];
for(i=0;i<n;i++) scanf("%d",&b[i]);
int c[m+n];
for(i=0;i<m;i++) c[i]=a[i];
for(i=m;i<m+n;i++) c[i]=b[i-m];
for(i=0;i<m+n;i++) printf("%d ",c[i]);
	}
