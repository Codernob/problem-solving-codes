﻿#include <iostream>
#include <string>
using namespace std;
int main() {
int i,t;
string s;	
cin>>t;
for(i=0;i<t;i++) {	
cin>>s;	
if(s=="1" || s=="4" || s=="78") cout<<"+\n";
else if(s[s.size()-1]=='5' && s[s.size()-2]=='3') cout<<"-\n";
else if(s[0]=='9' && s[s.size()-1]=='4') cout<<"*\n";
else if(s[0]=='1' && s[1]=='9' && s[2]=='0') cout<<"?\n";
	}	
return 0;	
}
