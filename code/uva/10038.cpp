#include <bits/stdc++.h>
using namespace std;
int main() {
int n,i,f,arr[3500],diff[3500];
while(scanf("%d",&n)!=EOF) {	
for(i=0;i<n;i++) cin>>arr[i];
for(i=0;i<n-1;i++) diff[i]=abs(arr[i]-arr[i+1]);
f=0;
sort(diff,diff+n);
/*cout<<"arr: ";
for(i=0;i<n;i++) cout<<arr[i]<<" ";
cout<<endl<<"diff: ";
for(i=0;i<n-1;i++) cout<<diff[i]<<" ";
cout<<endl;*/
for(i=0;i<n-1;i++) {
//cout<<"i: "<<i<<" binary_search: "<<binary_search(diff,diff+n-1,i+1)<<endl;
if(binary_search(diff,diff+n-1,i+1)==false) {
	f=1; break;
		}
	}
if(f==1) cout<<"Not jolly\n";
else cout<<"Jolly\n";	
	}	
return 0;	
}
