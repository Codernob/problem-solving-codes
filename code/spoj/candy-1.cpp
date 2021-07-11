#include<iostream>
using namespace std;
int main() {
int i,p,a[10000],avg,sum,res;
while(!0) {
cin>>p;
if(p==-1) break;
sum=0;
for(i=0;i<p;i++) {
cin>>a[i];
sum+=a[i];	
	}
if(sum%p!=0) { cout<<"-1"<<endl; continue; }
avg=sum/p;
res=0;
for(i=0;i<p;i++) {
if(a[i]<avg) res+=avg-a[i];
		}
cout<<res<<endl;
	}	
return 0;	
}
