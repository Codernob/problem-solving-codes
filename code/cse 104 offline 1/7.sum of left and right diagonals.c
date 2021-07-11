#include<stdio.h>
int main() {
	int i,j,n,r=0,l=0;
	scanf("%d",&n);
	int a[n][n];
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
	scanf("%d",&a[i][j]); } }
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
	if(i==j) r=r+a[i][j];
	else if(i+j==n) l=l+a[i][j]; } }
	printf("r=%d\nl=%d",r,l);
}
