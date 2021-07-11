#include <iostream>
#include <vector>
#include <utility>
using namespace std;

typedef vector<int> vi;
typedef pair<int,vi> piv;
typedef vector<piv> vpiv;

vpiv AdjList;

int main() {
int t,n,m,Lu,u,v,learned,current_node,max_learn,max_node;
cin>>t;
for(int i=1;i<=t;i++) {
cin>>n>>m;	
AdjList.clear();
AdjList.assign(n,piv());
for(int j=0;j<n;j++) {
	cin>>Lu;
	AdjList[j].first=Lu;
		}
for(int k=0;k<m;k++) {
	cin>>u>>v;
	AdjList[u].second.push_back(v);
		}
learned=0;
current_node=0;
while(!0) {
if(AdjList[current_node].second.size()==0) break;
max_learn=-500;
for(auto a:AdjList[current_node].second) {
	if(AdjList[a].first>max_learn) {
		max_learn=AdjList[a].first;
		max_node=a;
		}
	}
current_node=max_node;
learned+=max_learn;	
		}
cout<<"Case "<<i<<": "<<learned<<" "<<current_node<<"\n";
	}
return 0;	
	}
