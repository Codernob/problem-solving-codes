#include<stdio.h>
int main() {
int i,j,n,m,r1=0,rn=0,c1=0,cm=0,sum;
scanf("%d %d",&n,&m);
int a[n][m];
for(i=0;i<n;i++) { for(j=0;j<m;j++) {
	scanf("%d",&a[i][j]); } }
for(j=0;j<m;j++) r1=r1+a[0][j];
for(i=0;i<n;i++) cm=cm+a[i][m-1];
for(j=0;j<m;j++) rn=rn+a[n-1][j];
for(i=0;i<n;i++) c1=c1+a[i][0];
sum=r1+cm+rn+c1-a[0][0]-a[0][n-1]-a[m-1][n-1]-a[n-1][0];
printf("%d",sum);
}
