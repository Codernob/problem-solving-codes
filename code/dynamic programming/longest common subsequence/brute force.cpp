#include <iostream>
#include <string>
using namespace std;
string s1,s2;
// x = index of s1
// y = index of s2
int lcs(int x,int y) {
if(x==-1 || y==-1) return 0; //empty string
//if characters at current indices match, we discard both of them and they will contribute to the lcs by 1
if(s1[x]==s2[y]) return 1+lcs(x-1,y-1);
//if characters at current indices don't match, we either discard the current character in s1 or in s2. the result at this point is the maximum of the results of the two choices.  since we didn't find any match in this stage, we don't add anything. 
else return max(lcs(x-1,y),lcs(x,y-1));
	}
int main() {
cin>>s1>>s2;
//start recursion from last index of strings
cout<<lcs(s1.size()-1,s2.size()-1);	
return 0;	
	}
