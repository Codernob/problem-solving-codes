#include <stdio.h>
int sa(int a[],int n) {
	if(n==1) return a[0];
	else return a[n-1]+sa(a,n-1);
	}
main() {
int a[]={1,2,3};
printf("%d",sa(a,3));
}
