#include<iostream>
#include<string>
using namespace std;
int main() {
unsigned long long input,i;
string temp;
while(!0) {
cin>>input;
if(input==0) break;
for(i=input;i<=input*10;i++) {
	temp=to_string(i);
	if(input+temp[0]-'0'==i) cout<<i<<" ";
		}
cout<<endl;
	}
return 0;	
}