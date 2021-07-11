#include<stdio.h>
int main()
{
	int i,j,n,s=0,m=0;
	scanf("%d",&n);
	int a[n][n];
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			printf("a[%d][%d]=",i+1,j+1);
			scanf("%d",&a[i][j]); } }
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			if(i==j && a[i][j]==1)  s++;
			else if(a[i][j]==0) m++; } }
	if(s==n && m==(n*(n-1))) printf("identity");
	else printf("not identity");
}
