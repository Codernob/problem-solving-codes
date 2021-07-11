#include<iostream>
using namespace std;
int main() {
int x1,x2,y1,y2,t,i;
cin>>t;
for(i=1;i<=t;i++) {
	cin>>x1>>y1>>x2>>y2;
	cout<<(x1>=x2?x1-x2:x2-x1)+(y1>=y2?y1-y2:y2-y1)<<endl;
	}
}
