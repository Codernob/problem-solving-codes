#include <iostream>
#include <vector>
#include <climits>
#include <map>
using namespace std;
 
typedef vector<int> vi;
typedef vector<bool> vb;
typedef vector<vi> vvi;
 
vvi AdjList;
vb visited;
 
void dfs(int u) {
	if(visited[u]==true) return;
	visited[u]=true;
	for(auto v:AdjList[u]) {
		dfs(v);
		}
	}
 
int main() {
int t,n,u,v,count;
map<int,int> reached; // <node,number of nodes reached>
cin>>t;
 
//taking graph input in adjecency list
for(int i=1;i<=t;i++) {
	cin>>n;
	AdjList.assign(n+1,vi());
	for(int j=1;j<=n;j++) {
	cin>>u>>v;
	AdjList[u].push_back(v);
			}

reached.clear(); 
int max=INT_MIN; //max will store maximum number of nodes reached by dfs(u)
for(int j=1;j<=n;j++) {
	visited.assign(n+1,int(0));
	dfs(j);
	count=0;
	for(int k=0;k<=n;k++) {
		if(visited[k]==true) count++;
		}
	if(count>max) max=count;
	reached[j]=count;
	visited.clear();
	}

int min=INT_MAX; // min will store the smallest node that reaches max nodes
for(auto a:reached) {
	if(a.second==max && a.first<min) min=a.first;
	}
cout<<"Case "<<i<<": "<<min<<"\n";
AdjList.clear();
		}
return 0;	
	}
