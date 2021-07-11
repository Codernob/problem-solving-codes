#include<iostream>
using namespace std;
int power(int x,int n) {
int i,ans=1;
for(i=1;i<=n;i++) ans=ans*x;
return ans;
	}
int main() {
int a,b,i,answer;
while(scanf("%d %d",&a,&b)!=EOF) {
int bina[32],binb[32],ans[32];
for(i=31;i>=0;i--) {
bina[i]=a%2;
a=a/2;
		}
for(i=31;i>=0;i--) {
binb[i]=b%2;
b=b/2;
		}
for(i=0;i<32;i++) {
if(bina[i]==1 && binb[i]==1) ans[i]=0;
if(bina[i]==0 && binb[i]==1) ans[i]=1;
if(bina[i]==1 && binb[i]==0) ans[i]=1;
if(bina[i]==0 && binb[i]==0) ans[i]=0;		}
answer=0;
for(i=0;i<32;i++) {
answer=answer+(ans[i])*(power(2,(31-i)));
		}
cout<<answer<<endl;
	}
return 0;
}
