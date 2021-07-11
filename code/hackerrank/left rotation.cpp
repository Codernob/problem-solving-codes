#include <iostream>
using namespace std;
void lr(int a[],int n) {
int temp=a[0];
for(int i=0;i<n-1;i++) a[i]=a[i+1];
a[n-1]=temp;
	}
int main() {
int n,d;
cin>>n/*>>d*/;
int a[n];
for(int i=0;i<n;i++) cin>>a[i];	
/*for(int i=1;i<=d;i++)*/ lr(a,n);
for(int i=0;i<n;i++) cout<<a[i]<<" ";	
return 0;
}