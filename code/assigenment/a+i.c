#include <stdio.h>
main() {
	int a,i,s=0,n;
	scanf("%d %d",&a,&n);
	for(i=1;i<=n;i++) {
	s=s+(a+(i*i));
	}
	printf("%d",s);
}
