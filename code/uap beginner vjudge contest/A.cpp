#include <iostream>
using namespace std;
int main() {
int a,b,n,d;	
scanf("%d %d",&a,&b);	
if(a<b) swap(a,b);
n=7-a; d=6;
while(!0) {
if(n%2==0 && d%2==0) { n/=2; d/=2; }	
else if(n%3==0 && d%3==0) { n/=3; d/=3; }
else break;
	}	
printf("%d/%d\n",n,d);
return 0;	
}