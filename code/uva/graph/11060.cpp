#include <cstring>
#include <iostream>
#include <algorithm>
#include <queue>
#include <string>
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
#define VISITED 1
#define UNVISITED 0

vector<string> A;

int kes=0;

int indexOf(string target) {
for(int i=0;i<A.size();i++) {
	if(A[i]==target) return i;
	}
return false;
	}
int V; //number of Vertices
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
	else
		{ 
cout<<"Case #"<<++kes<<": Dilbert should drink beverages in this order: "; 
			for(int i=0;i<ts.size();i++) {
		if(i==ts.size()-1) cout<<A[ts[i]]<<".\n\n";
		else cout<<A[ts[i]]<<" ";
		}
	}
}

int main() {
int n,m;
string b,b1,b2;
while(scanf("%d",&n)!=EOF) {
V=n;
AdjList.assign(V,vii());
A.assign(n,string());
for(int i=0;i<n;i++) {
cin>>b;
A[i]=b;
	}
cin>>m;
for(int i=0;i<m;i++) {
cin>>b1>>b2;
AdjList[indexOf(b1)].push_back(make_pair(indexOf(b2),0));
	}
/*int c=0;
for(auto a:AdjList) {
	cout<<c<<": ";
	for(auto a1:a) {
		cout<<a1.first<<" ";
		}
		cout<<"\n";
		c++;
	}	*/

dfs_num.assign(V,int(0));
ts.clear();
//printing topological sort using kahn's algorithm
kahn();
A.clear();
getchar();
	}
return 0;	
	}
