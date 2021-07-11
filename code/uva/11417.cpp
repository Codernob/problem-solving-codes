#include<iostream>
using namespace std;
int GCD(int x,int y) {
return y==0?x:GCD(y,x%y);
}
int main() {
int N,i,j,G;
while(!0) {
cin>>N;
if(N==0) break;
G=0;
for(i=1;i<N;i++) {
for(j=i+1;j<=N;j++) {
G+=GCD(i,j);
	}
}
cout<<G<<"\n";
}
return 0;	
}