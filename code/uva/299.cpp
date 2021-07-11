#include <iostream>
using namespace std;
int main() {
int t,i,j,k,s,c,temp,a[100];
cin>>t;
for(i=1;i<=t;i++) {
cin>>s;
c=0;
for(j=0;j<s;j++) cin>>a[j];
for(j=0;j<s;j++) {
	for(k=0;k<s-1;k++) {
		if(a[k]>a[k+1]) {
				temp=a[k];
				a[k]=a[k+1];
				a[k+1]=temp;
				c++;
				}
			}
		}
cout<<"Optimal train swapping takes "<<c<<" swaps."<<endl;
	}
return 0;	
}
