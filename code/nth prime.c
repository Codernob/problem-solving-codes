#include <stdio.h>
int nthprime(int n) {
	int i,a[n],j=1,idx=0;
	while(idx<n) {
		int c=0;
		for(i=1;i<=j;i++) {
		printf("%d ",i);
			if(n%i==0) c++;
			}
		printf("\n");
		if(c==2) a[idx++]=j;
		j++;
		}
	return a[n-1];
}
int main() {
	printf("%d",nthprime(25));
}
