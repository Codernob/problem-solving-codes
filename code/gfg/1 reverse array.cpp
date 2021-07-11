#include <iostream>
using namespace std;
int main() {
int n=4;
int a[]={3,2,6,5};
int l=0,r=n-1;
while(!0) {
	swap(a[l++],a[r--]);
    if(r<=l) break;
	}
for(int i=0;i<n;i++) cout<<a[i]<<" ";	
return 0;	
	}
