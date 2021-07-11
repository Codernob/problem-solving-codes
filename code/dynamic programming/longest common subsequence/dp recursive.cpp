#include <iostream>
#include <string>
using namespace std;
string s1,s2;
int dp[100][100];
//since we have to compare null strings, zeroth row and zeroth column of dp is occupied by 0 entries. result upto s1[x] and s2[y] corresponds to dp[x+1][y+1] because of the extra occupied row and column.
int lcs(int x,int y) {
if(dp[x+1][y+1]!=-1) return dp[x+1][y+1];
if(s1[x]==s2[y]) {
	//storing result before returning
	dp[x+1][y+1]=1+lcs(x-1,y-1);
	return dp[x+1][y+1];
	}
else {
	//storing result before returning
	dp[x+1][y+1]=max(lcs(x-1,y),lcs(x,y-1));
	return dp[x+1][y+1];
		}
	}
int main() {
cin>>s1>>s2;
for(int i=0;i<=s1.size();i++) {
	for(int j=0;j<=s2.size();j++) {
if(i==0 || j==0) dp[i][j]=0; //comparing empty strings; an empty string and another string have nothing in common
else dp[i][j]=-1; //not calculated yet
		}
	}
cout<<lcs(s1.size()-1,s2.size()-1);	
return 0;	
	}
