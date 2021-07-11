#include <stdio.h>
int isprime(int n) {
if(n==1) return 0;
int i;
for(i=2;i*i<=n;i++) 
	if(n%i==0) return 0;
return 1;
}
int nthprime(int n) {
int nth=0,i=1;
while(!0) {
	if(isprime(i)==1) {
		nth++;
		}
	if(nth==n) return i;
	i++;
	}
}
int main() {
	int t,i,j;
	scanf("%d",&t);
	for(i=1;i<=t;i++) {
	int n;
	scanf("%d",&n);
	printf("%d\n",nthprime(n));
	}
}
