#include <iostream>
#include <vector>
#include <stack>
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
vvi AdjList;
int main() {
stack<char> stck;
int t; string s;
cin>>t;
for(int Case=1;Case<=t;Case++) {
cout<<"Case "<<Case<<"\n";
AdjList.assign(26,vi()); //assigning 26 integer vectors to adjlist for 26 letters
//index 0 of adjecency list corresponds to A(ASCII value 65=65+0)
cin>>s;
stck.push(s[0]); //treating first letter of string as first node in graph traversal

    //looping through string s
	for(int j=1;j<s.size();j++) {
		if(s[j]==stck.top()) {
			stck.pop(); //popping element at top since all it's neighbors are visited
				}
		else {
			AdjList[stck.top()-65].push_back(s[j]-65);
			AdjList[s[j]-65].push_back(stck.top()-65);
            //now the edges u->v and v->u are added to adjecency list
			stck.push(s[j]); //pushing the unvisited node to stack
			}
		}

for(int i=0;i<26;i++) {
	if(AdjList[i].size()==0) continue; //node i has no neighbor nodes
	
	cout<<(char)(i+65)<<" = ";
	cout<<AdjList[i].size()<<"\n"; //printing number of nighbor nodes of node i
	}

AdjList.clear(); //deleting all the vectors adjecency list
	}
return 0;	
}
