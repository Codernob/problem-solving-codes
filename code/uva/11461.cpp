#include <iostream>
#include <math.h>
using namespace std;
int main() {
int n1,n2,t,i,c;
while(!0) {
scanf("%d %d",&n1,&n2);
if(n1==0 && n2==0) break;
c=0;
for(i=n1;i<=n2;i++) {
	 t=sqrt(i);
	 if(t*t==i) c++;
	}
cout<<c<<endl;
	}	
return 0;
}
