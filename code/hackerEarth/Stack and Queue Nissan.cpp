#include <iostream>
#include <climits>
using namespace std;
int main() {
double d=100;
while(!0) {
d=d*d;
cout<<d<<endl<<endl;
	}
int n,k,i,j;
double sum,max=INT_MIN;	
cin>>n>>k;	
int a[n];
for(i=0;i<n;i++) cin>>a[i];
for(i=0;i<k;i++) {
	sum=0;
	for(j=0;j<i+1;j++) {
		sum+=a[j];
		}
	for(j=n-1;j>n-k+i;j--) {
		sum+=a[j];
		}
	if(sum>max) {
		max=sum;
		}
	}
cout<<max<<endl;
return 0;
	}
