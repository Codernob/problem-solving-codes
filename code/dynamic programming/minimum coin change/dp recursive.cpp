#include <iostream>
#include <climits>
using namespace std;
int coins[100];
int dp[100]; //stores how many minimum coins it takes to make n at index n
int cc(int n,int c) {
if(dp[n]!=-1) return dp[n]; //returning result if already calculated
int min=INT_MAX;
for(int i=1;i<=c && coins[i]<=n;i++) {
	int temp=cc(n-coins[i],c)+1;
	if(temp<min && temp!=INT_MAX) min=temp;
		}
dp[n]=min; //saving result before returning it
return dp[n];
	}
int main() {
	int n,c;
	cin>>n>>c;
	for(int i=1;i<=c;i++) cin>>coins[i];
	for(int i=1;i<=n;i++) dp[i]=-1;
	cout<<cc(n,c);
return 0;	
	}
// 170 10
//1 2 3 4 5 6 7 8 9 10
