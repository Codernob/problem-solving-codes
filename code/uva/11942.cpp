#include<iostream>
using namespace std;
int main() {
int i,t,j,a[1000],f1,f2;
cin>>t;
cout<<"Lumberjacks:\n";
for(i=1;i<=t;i++) 	{
f1=0; f2=0;
for(j=0;j<10;j++) {
	cin>>a[j];
		}
for(j=0;j<10;j++) {
if(a[j]<a[j+1]) { f1=1; break; }
		}
for(j=0;j<10;j++) {
if(a[j]>a[j+1]) { f2=1; break; }
		}
if(f1==0 || f2==0) cout<<"Ordered\n";
else cout<<"Unordered\n";
	}
return 0;
}
