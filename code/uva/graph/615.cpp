#include <iostream>
#include <utility>
#include <vector>
#include <set>
#include <map>

using namespace std;
typedef pair<int,int> ii;

vector<ii> EdgeList;
map<int,bool> visited;
set<int> nodes;

bool dfs(int u) {
if(visited[u]==true) return false;
visited[u]=true;
for(auto edge:EdgeList) {
	if(edge.first==u) {
		if(dfs(edge.second)==false) return false;
			}
		}
return true;	
	}

int roots;
bool treeCheck() {
nodes.clear();
for(auto edge:EdgeList) {
nodes.insert(edge.first);
nodes.insert(edge.second);	
	}	
roots=0;
int root;
for(int node:nodes) {
	bool flag=false;
	for(auto edge:EdgeList) {
		if(node==edge.second) {
			flag=true; break;
			}
		}
	if(flag==false) { root=node; roots++; }
	}
if(roots==0 || roots>1) return false;
visited.clear();
for(auto node:nodes) visited[node]=false;
bool d=dfs(root);
if(!d) return false;
for(auto p:visited) if(p.second==false) return false;
return true;
	}

int main() {
int v1,v2,e,cse=0;	
while(!0) {	
EdgeList.clear();
	while(!0) {
cin>>v1>>v2;
if( (v1==0 && v2==0) || (v1<0 && v2<0) ) break;
EdgeList.push_back(make_pair(v1,v2));
		}
if(EdgeList.size()==0) {
	cout<<"Case "<<++cse<<" is a tree.\n";
	if(v1<0 && v2<0) break;
	continue;
	}
if(v1<0 && v2<0) break;
bool isTree=treeCheck();
if(isTree) cout<<"Case "<<++cse<<" is a tree.\n";
else cout<<"Case "<<++cse<<" is not a tree.\n";
	}	
return 0;	
	}
