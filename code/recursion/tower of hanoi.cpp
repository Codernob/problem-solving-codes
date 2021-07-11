#include <iostream>
using namespace std;
void hanoi(int n,char source,char auxilary,char target) {
if(n==1) {
printf("move disk %d from %c to %c\n",1,source,target);
	}	
else {
hanoi(n-1,source,target,auxilary);	
printf("move disk %d from %c to %c\n",n,source,target);
hanoi(n-1,auxilary,source,target);	
		}
	}
int main() {
hanoi(3,'A','B','C');	
return 0;	
}
