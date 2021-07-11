#include<stdio.h>
main() {
	int a=0,b=1,c,n;
	scanf("%d",&n);
	printf("%d %d ",a,b);
	while(!0) {
		c=a+b;
		if(c>n) break;
		printf("%d ",c);
		a=b;
		b=c;
}
}
