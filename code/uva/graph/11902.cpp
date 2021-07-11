#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vii;

char ans[1000][1000]={'N'};
int n;
vii adjList;
vi visited;
int y;
int x;
bool flag;
vector<int> reachable;	

bool isPresent(vector<int> v,int target) {
int low,high,mid;
low=0; high=v.size()-1;
while(low<=high) {
mid=(low+high)/2;
if(v[mid]==target) return true;
else if(v[mid]>target) high=mid-1;
else low=mid+1;
		}
return false;
	}

void dfs(int u) {
if(u==x) return;
if(u==y) { flag=true; return; }
if(visited[u]==1) return;
visited[u]=1;
if(x==n+1) reachable.push_back(u);	
for(auto a:adjList[u]) dfs(a);
}
int main() {
int t;
cin>>t;	
for(int i=0;i<t;i++) {	
cin>>n;
int node;
adjList.assign(n,vi());	
for(int j=0;j<n;j++) {
	for(int k=0;k<n;k++) {
		cin>>node;
	if(node) adjList[j].push_back(k);
			}
		}
reachable.clear();
visited.assign(n,int(0));
x=y=n+1;
dfs(0);
visited.clear();
for(int l=0;l<n;l++) {
		for(int m=0;m<n;m++) {
	visited.assign(n,int(0));
	x=l; y=m;
	dfs(0);
	sort(reachable.begin(),reachable.end());
	if(flag==true || !isPresent(reachable,y) ) ans[l][m]='N';
	else ans[l][m]='Y';
	flag=false;
	visited.clear();
		}
	}

cout<<"Case "<<i+1<<":\n";
	//printing ans array
for(int l=0;l<n;l++) {
	for(int m=0;m<n;m++) {
	if(m==0) {
	cout<<"+";
		for(int p=0;p<2*n-1;p++) cout<<"-";
	cout<<"+\n";
	cout<<"|";
	}
	cout<<ans[l][m]<<"|";
	if(m==n-1) cout<<"\n";
	if(l==n-1 && m==n-1) {
	cout<<"+";
		for(int p=0;p<2*n-1;p++) cout<<"-";
	cout<<"+\n";
			}
		}
	}
for(int l=0;l<n;l++) {
	for(int m=0;m<n;m++) {
		ans[l][m]='M';
			}
		}
adjList.clear();
	}	
	
return 0;	
	}
