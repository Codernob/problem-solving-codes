#include <stdio.h> 
main() {
int a[10]={2,6,4,1,8,9,4,2,1,8},n=10,i,j,p=5;
for(i=0;i<n;i++) printf("%d ",a[i]);
printf("\n");
for(j=p+1;j<n;j++) a[j-1]=a[j];
n--;
for(i=0;i<n;i++) printf("%d ",a[i]);
printf("\n");
}
