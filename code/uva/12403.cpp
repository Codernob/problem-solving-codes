#include <iostream>
#include <string>
using namespace std;
int main() {
int t,i,sum=0,donation;	
string input;	
cin>>t;
for(i=0;i<t;i++) {
cin>>input;
if(input=="donate") {
	 cin>>donation; 	
	 sum+=donation;
	 }
if(input=="report") cout<<sum<<endl;	
	}
return 0;	
}