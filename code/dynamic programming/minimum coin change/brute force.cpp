#include <iostream>
#include <climits>
using namespace std;
int coins[100]; //list of coins [1 indexing]
//n=current count
//c=number of coins
int cc(int n,int c) {
//cout<<"cc("<<n<<","<<c<<")\n";
if(n==0) return 0;
int min=INT_MAX; //min will have the minimum number of coins needed to make n

//iterating through coins[], discarding any coin greater than current n
for(int i=1;i<=c && coins[i]<=n;i++) {
	int temp=cc(n-coins[i],c)+1; //now temp will have number of coins required to make current n. we added 1 because we chose ith coin
	if(temp<min && temp!=INT_MAX) min=temp; //if temp is a better solution than min , then we update min
		}
return min;
	}
int main() {
	//n=value to make change of
	//c=number of notes
	int n,c;
	cin>>n>>c;
	for(int i=1;i<=c;i++) cin>>coins[i];
	cout<<cc(n,c);
return 0;	
	}
