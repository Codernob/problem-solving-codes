#include <stdio.h>
int rev=0,r;
int reverse(int n) {
		if(n) {
			r=n%10;
			rev=rev*10+r;
			reverse(n/10);
			return rev;
		}
		else return rev;
	}
main() {
printf("%d",reverse(1234));

}
