#include <iostream>
#include <vector>
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vii;

vii AdjList;

int V;

int color[1000]; // color -1 if unvisited
bool isBipartite;

void dfs(int u) {
for(auto v:AdjList[u]) {
	if(color[v]==-1) {
		color[v]=1-color[u];
		dfs(v);
			}
	else if(color[u]==color[v]) {
		isBipartite=false;
		return;
			}	
		}	
	}

int main() {
int n,l,n1,n2;
while(!0) {
scanf("%d",&n);	
if(n==0) break;
scanf("%d",&l);
V=n;
AdjList.assign(n,vi());
for(int l=0;l<n;l++) color[l]=-1;
for(int i=0;i<l;i++) {
scanf("%d %d",&n1,&n2);
AdjList[n1].push_back(n2);
AdjList[n2].push_back(n1);	
	}
isBipartite=true;
color[0]=0;
dfs(0);
if(isBipartite) printf("BICOLORABLE.\n");
else printf("NOT BICOLORABLE.\n");
		}	
return 0;
	}
