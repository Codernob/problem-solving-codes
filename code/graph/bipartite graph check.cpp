#include <iostream>
#include <vector>
#include <utility>
#include <queue>
#define INF 1000000007
using namespace std;

typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

//graph with V Vertices
int V=3;

bool isBipartite=true; //whether the graph is bipartite or not

vi color(V,INF); //color of every node

vector<vii> AdjList; //adjecency list to store information of weighted graph

//depth first search for bipartity check
void dfs(int u) {
	for(auto v:AdjList[u]) {
		if(color[v.first]==INF) {
		color[v.first]=1-color[u];
		dfs(v.first);
			}
		else if(color[u]==color[v.first]) {
		isBipartite=false;
			return;	
			}
		}

	}
	
int main() {

AdjList.assign(V,vii());
	
/*AdjList[0].push_back(make_pair(1,0));
AdjList[0].push_back(make_pair(2,0));
AdjList[0].push_back(make_pair(3,0));

AdjList[1].push_back(make_pair(3,0));

AdjList[2].push_back(make_pair(4,0));

AdjList[3].push_back(make_pair(5,0));

AdjList[4].push_back(make_pair(5,0));*/

AdjList[0].push_back(make_pair(1,0));
AdjList[1].push_back(make_pair(2,0));
AdjList[2].push_back(make_pair(0,0));


	
//starting node: s
int s=0;
color[s]=0;
dfs(s); //calling dfs for bipartity check

/*//breadth first search for bipartity check
queue<int> q;
q.push(s);
color[s]=0;
while(!q.empty() & isBipartite) {
	int u=q.front();
	q.pop();
	for(int j=0;j<(int)AdjList[u].size();j++) {
	ii v=AdjList[u][j]; 
		//v is neighbor of u
	if(color[v.first]==INF) {
		// u and v should have different color
		if(color[u]==1) color[v.first]=0;
		if(color[u]==0) color[v.first]=1;
		// alternatively,
		//color[v.first]=1-color[u];
		q.push(v.first);
		}
	else if(color[v.first]==color[u]) {
		//since u's neighbor v has same color as u, graph is not bipartite
		isBipartite=false;
		break;
		}
	}
}*/

if(isBipartite) cout<<"graph is bipartite\n";
else cout<<"not bipartite\n";

//color of every node
for(auto i:color) cout<<i<<" ";
	
return 0;	
	}
