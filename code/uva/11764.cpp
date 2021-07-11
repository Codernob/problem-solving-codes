#include<iostream>
using namespace std;
int main() {
int i,j,t,Not,cp,Noh,Nol,tower;
cin>>t;
for(i=1;i<=t;i++) {
scanf("%d\n%d",&Not,&tower);
cp=tower;
Noh=0; Nol=0;
for(j=1;j<Not;j++) {
cin>>tower;
if(cp<tower) Noh++;
else if(cp>tower) Nol++;
cp=tower;
		}
cout<<"Case "<<i<<": "<<Noh<<" "<<Nol<<endl;
	}	
return 0;
}