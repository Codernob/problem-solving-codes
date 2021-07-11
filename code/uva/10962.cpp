#include <iostream>
using namespace std;
int main() {
int i,j,k,time,tc,R,r,N,C,s[500],g[500],t[500],gk,lk,idx1,idx2;
cin>>tc;
for(i=1;i<=tc;i++) {	
getchar();
cin>>R>>r>>N>>C;
for(j=0;j<N;j++) {
	cin>>s[j]>>g[j];
		}
for(j=0;j<C;j++) {
	cin>>t[j];
		}
gk=lk=idx1=idx2=0;
for(time=1;time<=t[C-1];time++) {
if(gk<g[idx1]) gk+=R;
else { gk=R; idx1++; }
// code for lk goes here
if(t[k]==time && lk==0) {
	 cout<<"clear\n";
	 k++;
	 }
if(t[k]==time && lk!=0) {
	cout<<"full\n";
	k++;
	}
		}
	}
return 0;	
}
