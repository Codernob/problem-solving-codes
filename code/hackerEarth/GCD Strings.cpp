#include <iostream>
#include <string>
#include <cmath>
using namespace std;
string S(int a,string g);

string g(int a,int b) {
	if(a%b==0) {
		string ans="1";
		for(int i=1;i<=a-1;i++) ans+="0";
		return ans;
		}
	else {
		return S(a,g(b,a%b));
		}
	}
	
string S(int a,string g) {
	while(!0) {
		if(g.size()>a) break;
		g+=g;
		}
	string r;
	for(int i=0;i<a;i++) r+=g[i];
	return r;
	}

int F(int a,int b) {
	int ans=0;
	string bin=g(a,b);
	int size=bin.size();
	for(int i=size-1;i>=0;i--) {
		ans+=((bin[i]-'0')*pow(2,size-i-1));
		}
return ans;
	}

int main() {
int t,a,b;	
cin>>t;	
for(int i=1;i<=t;i++) {	
cin>>a>>b;
cout<<F(a,b)%1000000007<<"\n";	
		}	
	}
