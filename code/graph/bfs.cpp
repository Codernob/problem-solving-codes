#include <iostream>
#include <vector>
#include <utility>
#include <queue>
#define INF 1000000007
using namespace std;

typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

//adjecency list to store information of weighted graph
vector<vii> AdjList;

//integer vector to store status - visited (1) or unvisited (0) of all nodes
vi visited;

	
int main() {
//graph with n nodes
int n=5;
AdjList.assign(n,vii());

//setting all nodes as unvisited
visited.assign(n,int(0));
	
AdjList[0].push_back(make_pair(1,9));
AdjList[0].push_back(make_pair(2,3));

AdjList[1].push_back(make_pair(3,12));

AdjList[2].push_back(make_pair(4,12));


//starting node: s
int s=0;

//record distance from s of every node in d
vi d(n,INF);
//distance from node s to itself is 0
d[s]=0;
queue<int> q;
//visiting node s first
visited[s]=1;
q.push(s);
while(!q.empty()) {
	int u=q.front();
	q.pop();
	for(int j=0;j<(int)AdjList[u].size();j++) {
	ii v=AdjList[u][j];
	if(d[v.first]==INF) {
		d[v.first]=d[u]+v.second;
		q.push(v.first);
		visited[v.first]=1;
		//cout<<v.first<<" ";
		}
	}
}

//now all nodes are visited
for(auto i:visited) cout<<i<<" ";
cout<<"\n";
//distance from s of every node
for(auto i:d) cout<<i<<" ";
	
return 0;	
	}
