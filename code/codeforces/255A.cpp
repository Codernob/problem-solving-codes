#include<iostream>
using namespace std;
int main() {
int n,i,c=0,temp,ch=0,bi=0,ba=0;
cin>>n;
for(i=1;i<=n;i++) {
cin>>temp;
if(i%3==1) ch+=temp;
if(i%3==2) bi+=temp;
if(i%3==0) ba+=temp;
	}
if(ch>bi && ch>ba) cout<<"chest\n";
if(bi>ch && bi>ba) cout<<"biceps\n";
if(ba>ch && ba>bi) cout<<"back\n";
}
