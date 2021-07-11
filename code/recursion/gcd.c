#include <stdio.h>
int gcd(int n1,int n2) {
	if(n2) return gcd(n2,n1%n2);
	else return n1;
	}
int main() {
	printf("%d",gcd(36,60));
}
