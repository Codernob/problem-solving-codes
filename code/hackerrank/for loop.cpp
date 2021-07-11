#include<iostream>
using namespace std;
void show(int n) {
if(n==1) cout<<"one\n";
if(n==2) cout<<"two\n";
if(n==3) cout<<"three\n";
if(n==4) cout<<"four\n";
if(n==5) cout<<"five\n";
if(n==6) cout<<"six\n";
if(n==7) cout<<"seven\n";
if(n==8) cout<<"eight\n";
if(n==9) cout<<"nine\n";
	}
int main() {
int i,a,b;
cin>>a>>b;
for(i=a;i<=b;i++) {
if(i>=1 && i<=9) show(i);
else if(i%2==0) cout<<"even"<<endl;
else if(i%2!=0) cout<<"odd\n";
	}
return 0;
}
