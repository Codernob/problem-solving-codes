#include <iostream>
#include <vector>
#include <utility>
#include <stack>
using namespace std;

typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

//adjecency list to store information of weighted graph
vector<vii> AdjList;

//integer vector to store status - visited (1) or unvisited (0) of all nodes
vi visited;

void dfs(int u) {
//cout<<"dfs("<<u<<")\n";
if(!visited[u]) cout<<u<<" ";
visited[u]=1;
for(int j=0;j<(int)AdjList[u].size();j++) {
	ii v=AdjList[u][j];
	if(visited[v.first]==0) dfs(v.first);
	}
}

void iterativeDfs(int u) {
	stack<int> nodes;
	nodes.push(u);
	while(!nodes.empty()) {
		int t=nodes.top();
		nodes.pop();
		if(visited[t]==0) {
			cout<<t<<" ";
			visited[t]=1;
			}
		for(auto v=AdjList[t].begin();v!=AdjList[t].end();v++) {
			if(visited[v->first]==0) nodes.push(v->first);
			}
		}
	}

	
int main() {
//graph with n nodes
int n=7;
AdjList.assign(n,vii());

//setting all nodes as unvisited
for(int i=0;i<n;i++) visited.push_back(0);
	
AdjList[0].push_back(make_pair(1,9));
AdjList[0].push_back(make_pair(4,9));


AdjList[1].push_back(make_pair(2,9));
AdjList[1].push_back(make_pair(3,7));

AdjList[4].push_back(make_pair(5,5));
AdjList[4].push_back(make_pair(6,9));


cout<<"recursive dfs: \n";	
dfs(0);
	
//setting all nodes as unvisited
visited.clear();
for(int i=0;i<n;i++) visited.push_back(0);


cout<<"\niterative dfs: \n";
iterativeDfs(0);
	
//now all nodes are visited
//for(auto i:visited) cout<<i<<" ";
	
return 0;	
	}
