#include <iostream>
#include <string>
using namespace std;
class member {
public:
string name;
int amount,ng,avg,get,give;
string rec[10]={"0"};
	};
int main() {
int n;
while(scanf("%d",&n)!=EOF) {
member m[n];
for(int i=0;i<n;i++) cin>>m[i].name;
string temp;
cin>>temp;
for(int i=0;i<n;i++) {
if(m[i].name==temp) 	{
	cin>>m[i].amount;
	cin>>m[i].ng;
	for(int j=0; j<m[i].ng;j++) {
		cin>>m[i].rec[j];
				}
			}
		}
for(int i=0;i<n;i++) {
cout<<m[i].name<<" "<<m[i].amount<<" "<<m[i].ng<<" ";
for(int j=0;j<m[i].ng;j++) cout<<m[i].rec[j]<<" ";
cout<<endl;
		}
	}	
return 0;	
}
