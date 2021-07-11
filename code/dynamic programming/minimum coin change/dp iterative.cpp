#include <iostream>
#include <climits>
using namespace std;
int dp[100],s[100];
int main() {
int n,c,coins[100];
cin>>n>>c;
for(int i=1;i<=c;i++) cin>>coins[i];
dp[0]=0;
//finding minimum number of coins for every change i
for(int i=1;i<=n;i++) {
	int min=INT_MAX;
	//trying every coin
	for(int j=1;j<=c && coins[j]<=i;j++) {
		int temp=dp[i-coins[j]]+1;
		if(temp<min && temp!=INT_MAX) {
							min=temp;
							s[i]=coins[j];
								}
		}
	//now min has minimum number of coins to make i, so we store it
	dp[i]=min;
	}
//printing dp table
for(int i=0;i<=n;i++) cout<<i<<"\t";
cout<<endl;
for(int i=0;i<=n;i++) cout<<dp[i]<<"\t";
cout<<endl;
for(int i=0;i<=n;i++) cout<<s[i]<<"\t";
cout<<endl<<endl;
cout<<dp[n];
return 0;	
}
