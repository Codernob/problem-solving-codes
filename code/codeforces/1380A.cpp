#include <iostream>
using namespace std;
int main() {
int t,n,l,i,j,k,p[2000];
cin>>t;	
for(l=0;l<t;l++) {
	bool flag=false;
	cin>>n;
	for(i=0;i<n;i++) cin>>p[i];
	for(i=0;i<n && flag==false;i++) {
		for(j=i+1;j<n && flag==false;j++) {
			for(k=j+1;k<n && flag==false;k++) {
				if(p[i]<p[j] && p[j]>p[k]) {
					cout<<"YES\n"<<(i+1)<<" "<<(j+1)<<" "<<(k+1)<<"\n";
					flag=true;
						}
					}
				}
			}
if(flag==false) cout<<"NO\n";	
		}
return 0;	
	}