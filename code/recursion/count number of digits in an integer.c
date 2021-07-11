#include <stdio.h>
int c=0;
int digits(int n) {
	if (n!=0) {
		c++;
		digits(n/10);
		return c;
		}
	 else return c;
}
main() {
printf("%d",digits(3264));
}
