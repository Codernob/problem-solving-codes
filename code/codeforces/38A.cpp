#include <iostream>
using namespace std;
int main() {
int n,a,b,i,sum=0;	
cin>>n;	
int arr[n];	
for(i=0;i<n;i++) cin>>arr[i];	
cin>>a>>b;
for(i=a-1;i<=b-1;i++) sum+=arr[i];
cout<<sum<<endl;	
return 0;	
}