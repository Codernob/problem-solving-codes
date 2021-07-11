#include <stdio.h>
int hanoi(int n) {
	if(n==1) return 1;
	else return 2*hanoi(n-1)+1;
}
main() {
	printf("%d",hanoi(4));
}
