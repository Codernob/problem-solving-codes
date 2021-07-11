#include <cstring>
#include <iostream>
#include <queue>
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
#define VISITED 1
#define UNVISITED 0


int V=8; //number of Vertices
vector<vii> AdjList; //Adjecency List 
				//(vector of integer pairs to store weighted graph)

vi dfs_num; //keeps track of visited nodes
vi ts; // global vector to store the toposort in reverse order

vi indegree; //stores in-degree of all nodes

//kahn's algo uses bfs to produce a topological sort of a graph
void kahn() {
indegree.assign(V,int(0));
//computing in-degree of every vertex
for(auto a1:AdjList) {	
	for(pair<int,int> a2:a1) {
		indegree[a2.first]++;
		}
	}
//for(auto a1:indegree) cout<<a1<<" ";	
queue<int> q; 
//pushing all nodes with zero in-degree to queue
for(int i=0;i<V;i++) {
	if(indegree[i]==0) q.push(i);
		}
int c=0; //number of nodes in topological sort
while(!q.empty()) {
	int u=q.front();
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

void dfs2(int u) { // different function name compared to the original dfs 
if(dfs_num[u]==VISITED) return;
dfs_num[u] = VISITED; 
for (int j = 0; j < (int)AdjList[u].size(); j++) {
ii v = AdjList[u][j]; 
if (dfs_num[v.first] == UNVISITED) dfs2(v.first);
		} 
ts.push_back(u); 
	}

//prints all possible topological sorts
void apts() {
bool flag=false; //to indicate whether all topological are found or not
for(int i=0;i<V;i++) {
//if a vertex has no incoming edges and it is not visited, then only choose it
if(indegree[i]==0 && dfs_num[i]==0) 
	{
	//reducing indegree of adjacent vertices
	for(auto j=AdjList[i].begin();j!=AdjList[i].end();j++) 
			indegree[j->first]--;	
		
	//including in ts
	ts.push_back(i);
	dfs_num[i]=VISITED;
	apts();
	
	//resetting result, visited for backtracking			
	dfs_num[i]=false;
	ts.erase(ts.end()-1);
	for(auto j=AdjList[i].begin();j!=AdjList[i].end();j++) 
			indegree[j->first]++;
	flag=true;
			}	
		}
//we reach here if all vertices are visited
if(flag==false) {
	for(int i=0;i<ts.size();i++) 
			cout << ts[i] << " "; 
			cout << endl; 
		}	
	}

int main() {
AdjList.assign(V,vii());

//graph in cp3 book page 127
AdjList[0].push_back(make_pair(1,0));
AdjList[0].push_back(make_pair(2,0));

AdjList[1].push_back(make_pair(2,0));
AdjList[1].push_back(make_pair(3,0));

AdjList[2].push_back(make_pair(3,0));
AdjList[2].push_back(make_pair(5,0));

AdjList[3].push_back(make_pair(4,0));

AdjList[7].push_back(make_pair(6,0));


ts.clear();
/*dfs_num.assign(V,int(0));
	
//printing topological sort using dfs	
for (int i = 0; i < V; i++)
if (dfs_num[i] == UNVISITED) dfs2(i);

for (int i = (int)ts.size() - 1; i >= 0; i--)
printf(" %d", ts[i]); printf("\n");	

//printing topological sort using kahn's algorithm
ts.clear();
kahn();*/

//printing all possible topological sort of dag
ts.clear();
dfs_num.assign(V,int(0));
indegree.assign(V,int(0));
//computing in-degree of every vertex
for(auto a1:AdjList) {	
	for(pair<int,int> a2:a1) {
		indegree[a2.first]++;
		}
	}
apts();	
return 0;	
	}
