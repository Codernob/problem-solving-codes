#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
while(!0) {
cin>>n;
if(n==0) break;
queue <int> cards;	
for(int i=1;i<=n;i++) cards.push(i);
if(cards.size()==1) cout<<"Discarded cards:";
else cout<<"Discarded cards: ";
while(!0) {
if(cards.size()==1) break;
if(cards.size()==2) cout<<cards.front();
else cout<<cards.front()<<", ";
cards.pop();
cards.push(cards.front());
cards.pop();
		}
cout<<"\nRemaining card: "<<cards.front()<<endl;
	}	
return 0;	
}
