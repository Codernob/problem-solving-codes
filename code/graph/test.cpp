#include <cstring>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
#define VISITED 1
#define UNVISITED 0


int V=10; //number of Vertices
vector<vii> AdjList; //Adjecency List 
				//(vector of integer pairs to store weighted graph)

vi dfs_num; //keeps track of visited nodes
vi ts; // global vector to store the toposort in reverse order

vi indegree; //stores in-degree of all nodes

//kahn's algo uses bfs to produce a topological sort of a graph
void kahn() {
indegree.assign(V,int(0));

for(int i=0;i<V;i++) {
sort(AdjList[i].begin(),AdjList[i].end());
	}

//computing in-degree of every vertex
for(auto a1:AdjList) {	
	for(pair<int,int> a2:a1) {
		indegree[a2.first]++;
		}
	}
//for(auto a1:indegree) cout<<a1<<" ";	
priority_queue<int,vector<int>,greater<int>> q; 
//pushing all nodes with zero in-degree to queue
for(int i=0;i<V;i++) {
	if(indegree[i]==0) q.push(i);
		}
int c=0; //number of nodes in topological sort
while(!q.empty()) {
	//int u=q.front();
	int u=q.top();
	q.pop();
	ts.push_back(u);
	c++;
	for(auto v:AdjList[u]) {
		indegree[v.first]--; //delete edge u->v
		if(indegree[v.first]==0) q.push(v.first); //now if child has no incoming edge, push v to queue
			}
		}
	if(c!=V) cout<<"there is a cycle, so no valid topological sort exists\n";
	else for(auto a:ts) cout<<a<<" ";
	}

int main() {


AdjList.assign(V,vii());

AdjList[1].push_back(make_pair(0,0));
AdjList[1].push_back(make_pair(9,0));

AdjList[2].push_back(make_pair(9,0));
AdjList[2].push_back(make_pair(8,0));
AdjList[2].push_back(make_pair(7,0));

AdjList[5].push_back(make_pair(4,0));
AdjList[5].push_back(make_pair(6,0));

AdjList[6].push_back(make_pair(3,0));

AdjList[7].push_back(make_pair(4,0));
AdjList[7].push_back(make_pair(1,0));
AdjList[7].push_back(make_pair(3,0));


dfs_num.assign(V,int(0));

//printing topological sort using kahn's algorithm
ts.clear();
kahn();

return 0;	
	}
