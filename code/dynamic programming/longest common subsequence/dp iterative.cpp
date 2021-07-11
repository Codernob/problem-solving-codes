#include <iostream>
using namespace std;
int main() {
string s1,s2;
cin>>s1>>s2;	
int dp[100][100];
for(int i=0;i<=s1.size();i++) {
	for(int j=0;j<=s2.size();j++) {
if(i==0 || j==0) dp[i][j]=0;
else if(s1[i-1]==s2[j-1]) dp[i][j]=1+dp[i-1][j-1];
else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
			}
		}
cout<<dp[s1.size()][s2.size()];
	}