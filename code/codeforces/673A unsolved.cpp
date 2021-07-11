#include<iostream>
using namespace std;
int main() {
int n,i,current,previous=0,f=0;
cin>>n;
for(i=1;i<=n;i++) {
cin>>current;
if(current-previous>15) 
	{ cout<<previous+15; f=1; break; }
previous=current;
	}
if(f==0) {
	cout<<90<<endl; }
}
