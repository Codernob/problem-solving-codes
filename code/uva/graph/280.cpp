#include <iostream>
#include <vector>
#include <string>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;

vvi AdjList;
vi visited;

bool firstTraversal;

void dfs(int u) {
if(visited[u]==1) return;
if(firstTraversal==false) visited[u]=1;
firstTraversal=false;
for(auto v:AdjList[u]) {
	dfs(v);
		}
	}

int main() {
int n,i,j,size,starting,count;	
while(!0) {	
cin>>n;
if(n==0) break;
AdjList.assign(n+1,vi());
	while(!0) {
cin>>i;	
if(i==0) break;	
		while(!0) {
	cin>>j;
	if(j==0) break;
	AdjList[i].push_back(j);
		}
	}
cin>>size;
for(int loop=0;loop<size;loop++) {
visited.assign(n+1,int());
cin>>starting;	
firstTraversal=true;
dfs(starting);
count=0;
for(int l=1;l<=n;l++) {
if(visited[l]==0) count++;
	}
if(count!=0) cout<<count<<" ";
else cout<<count;
for(int idx=1;idx<n+1;idx++) {
if(visited[idx]==0) {
	bool found=false;
	for(int lep=idx+1;lep<n+1;lep++) {
		if(visited[lep]==0) { 
			 found=true;
			 break; 
				}
			}
	if(found==true) cout<<idx<<" ";
	else cout<<idx;
		}
	}
cout<<"\n";
		}	
visited.clear();
AdjList.clear();
	}
return 0;	
	}
