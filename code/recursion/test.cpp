#include <iostream>
using namespace std;
int sum(int n) {
if(n==1) {
	printf("%d\n",n);
	return 1;
	}
else {
	int t=sum(n-1);
	printf("%d\n",n);
	return t+n;
		}
	}
int main() {
int s=sum(3);
printf("%d",s);
return 0;	
}