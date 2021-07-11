#include <iostream>
#include<cstdlib>
using namespace std;
int main() {
double i,head,tail,Ph,Pt,n=10;
while(n<10e+08) {
head=0;
tail=0;
for(i=1;i<=n;i++) {
	if(rand()%2==1) head++;
	if(rand()%2==0) tail++;
	}
Ph=head/n;
Pt=tail/n;
cout<<"after "<<n<<" iterations,\nprobability of head: "<<Ph<<endl<<"probability of tail: "<<Pt<<endl<<endl;
n=n*10;
	}
return 0;
}
