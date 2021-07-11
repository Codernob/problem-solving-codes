#include<iostream>
using namespace std;
bool isprime(int n) {

}
int main() {

int i,j,n,m,t;
cin>>t;
for(i=0;i<t;i++) {
    cin>>m>>n;
    for(j=m;j<=n;j++) {
        if(isprime(j)==1)  cout<<j<<endl;
        }
    cout<<endl;
    }
}
