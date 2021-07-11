#include <iostream>
using namespace std;
int main() {
unsigned long long int a,m;
char f;
cin>>a>>m;
while(!0) {	
if(a%m==0) { f='y'; break; }
if(a>(m+10000000LL) && a%m!=0) { f='n'; break; }
a=a+a%m;	
	}
if(f=='y') printf("Yes\n");
else printf("No\n");
return 0;	
}
