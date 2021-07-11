#include <iostream>
#include <algorithm>
using namespace std;
int main() {	
int n,c=0;
cin>>n;
int a[n];
for(int i=0;i<n;i++) cin>>a[i];
sort(a+1,a+n,greater<int>());
while(!0) {
	if(a[0]>a[1]) break;
	c++;
    a[1]--;
    a[0]++;
	sort(a+1,a+n,greater<int>());
    //for(int i=0;i<n;i++) cout<<a[i]<<" ";
    //cout<<endl;
	}
cout<<c<<endl;
return 0;
}
