#include <iostream>
#include <string>
using namespace std;
int main() {
string 	S,T;	
int i,j,k,t;
cin>>t;	
for(i=1;i<=t;i++) {	
cin>>S>>T;
for(j=0;j<S.size();j++) {	
	for(k=0;k<T.size();k++) {
		if(S[j]>T[k]) {
			char temp=S[j];
			S[j]=T[k];
			T[k]=temp;
			}
				}
			}
cout<<S<<endl;
		}

return 0;
	}
