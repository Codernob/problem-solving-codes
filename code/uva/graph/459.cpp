#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <queue>
#include<string>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef priority_queue<int> pqi;
typedef set<vi> svi;

vvi AdjList;
vi visited;
svi traversals;
vi temp;

//checks whether target is present in vector v
bool isPresent(vector<int> v,int target) {
sort(v.begin(),v.end());
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
	
pqi traversal; //used to store a single traversal
void dfs(int node) {
if(visited[node]==1) return;
visited[node]=1;
traversal.push(node);
for(int a:AdjList[node]) dfs(a);
	}
int main() {
int t,v; char max,v1,v2;
scanf("%d",&t);
//cout<<"t="<<t<<"\n";
for(int i=0;i<t;i++) {
cin>>max;
cin.ignore();
v=max-'A'+1;
AdjList.assign(v,vi());
visited.assign(v,int(0));
//cout<<"v= "<<v<<"\n";
string s;
while(getline(cin,s) && s!="") {
v1=s[0];
v2=s[1];
if(!isPresent(AdjList[v1-'A'], v2-'A')) AdjList[v1-'A'].push_back(v2-'A');
if(!isPresent(AdjList[v2-'A'], v1-'A'))
AdjList[v2-'A'].push_back(v1-'A');
//cout<<"v1= "<<v1<<" v2= "<<v2<<"\n";
		}
//printing adjecency list
/*int c=0;
for(auto a: AdjList) {
	cout<<c++<<": ";
	for(auto au: a) cout<<au<<" ";
	cout<<"\n";
	}*/
traversals.clear();
for(int l=0;l<(int)AdjList.size();l++) {
	//if a node has no neighbours, it is pushed as a single traversal into traversals
    if(AdjList[l].empty()) {
        vector<int> vemctor;
        vemctor.push_back(l);
        traversals.insert(vemctor);
    }
	for(int au: AdjList[l]) 	{
		traversal=pqi();
		visited.assign(v,int(0));
		dfs(au);
		temp.clear();
		//copying traversal queue to temp vector
		while(!traversal.empty()) {
		temp.push_back(traversal.top());
		traversal.pop();
			}
        /*cout<<"after traversing from node "<<au<<": ";
        for(auto m:temp) cout<<m<<" ";
        cout<<"\n";*/
		if(!temp.empty()) traversals.insert(temp);
		}
	}
/*cout<<"\n";
cout<<"printing all traversals\n";
for(auto a:traversals) {
    for(auto au: a) cout<<au<<" ";
    cout<<"\n";
}*/

//now traversals has all possible distinct traversals
if(i==t-1) cout<<traversals.size()<<"\n";
else cout<<traversals.size()<<"\n\n";
visited.clear();
AdjList.clear();
	}
return 0;
}
