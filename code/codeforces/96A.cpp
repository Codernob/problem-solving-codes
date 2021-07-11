#include <iostream>
#include <string>
using namespace std;
int main() {
string s;	
cin>>s;		
bool is_dangerous=false;	
for(int i=0;i<s.size();i++) {
if(s[i]!=s[i+1]) continue;
if(s[i+1]!=s[i+2]) continue;
if(s[i+2]!=s[i+3]) continue;
if(s[i+3]!=s[i+4]) continue;
if(s[i+4]!=s[i+5]) continue;
if(s[i+5]!=s[i+6]) continue;
else {
	is_dangerous=true; break;
	}
}
if(is_dangerous && s.size()>=7) cout<<"YES\n";
else cout<<"NO\n";	
return 0;	
}