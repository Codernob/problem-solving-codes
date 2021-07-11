#include <iostream>
#include <string>
using namespace std;
bool compare(string s1,string s2) {
int c=0;
for(int i=0;i<s1.size();i++) {
	if(s1[i]!=s2[i]) c++;
	}
if(c<=1) return true;
else return false;
}
int main() {
int i,t;
string input;	
cin>>t;	
for(i=0;i<t;i++) {	
cin>>input;	
if(compare(input,"one")==true) 
	cout<<"1\n";	
else if(compare(input,"two")==true) 
	cout<<"2\n";	
else if(compare(input,"three")==true) 
	cout<<"3\n";
	}
return 0;
}
