#include <iostream>
#include <string>
using namespace std;
class website {
public:
string adress;
int relevance;
	};
int main() {
website w[10];
int t,i,j,max;	
cin>>t;	
for(i=1;i<=t;i++) {
	for(j=0;j<10;j++) {
	cin>>w[j].adress; cin>>w[j].relevance;
		}	
max=INT_MIN;
for(j=0;j<10;j++) {
	if(w[j].relevance>max) max=w[j].relevance;
		}
cout<<"Case #"<<i<<":\n";
for(j=0;j<10;j++) {
	if(w[j].relevance==max) cout<<w[j].adress<<endl;
		}	
	}
return 0;	
}
