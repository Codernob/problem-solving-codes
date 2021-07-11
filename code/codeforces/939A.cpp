#include <iostream>
using namespace std;
int main() {
int n,temp,A,B,C;	
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++) {	
	cin>>temp;
	a[i]=temp-1;
		}
for(int i=0;i<n;i++) {
	if(i==a[a[a[i]]]) {
		cout<<"YES\n";
		break;
			}
		}
cout<<"NO\n";
return 0;
	}
