#include <stdio.h>
int main() {
int i,k,l,m,n,d,a[1000000],c=0;
scanf("%d\%d\n%d\n%d\n%d\n",&k,&l,&m,&n,&d);	
for(i=0;i<d;i++) a[i]=i+1;
for(i=0;i<d;i++) {
if(a[i]%k==0 || a[i]%l==0 || a[i]%m==0 || a[i]%n==0) a[i]=0;
	}
for(i=0;i<d;i++) {
	if(a[i]==0) c++;
		}
printf("%d\n",c);
return 0;
}
