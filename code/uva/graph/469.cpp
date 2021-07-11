// TLE :'(
#include <iostream>
using namespace std;
int N;
bool board[1000][1000];
bool blackwin=false;
void blackcheck(int x,int y) {
if(x>=N || y>=N || x<0 || y<0 || board[x][y]==true) return;
if(board[x][y]==false && x==N-1) {
	blackwin=true;
    return;
		}
blackcheck(x,y+1);
blackcheck(x+1,y);
blackcheck(x+1,y+1);
	}

int main() {
int n,i,j,t=1;
char c;
while(!0) {	
cin>>n;
N=n;
if(n==0) break;	
for(i=0;i<n;i++) {	
	for(j=0;j<n;j++) {	
			cin>>c;
			if(c=='b') board[i][j]=false;
			else board[i][j]=true;
			}
		}
for(i=0;i<n;i++) {
	blackcheck(0,i);
	if(blackwin==true) break;
		}
if(blackwin==true) cout<<t++<<" B\n";
else cout<<t++<<" W\n";
	}
	
return 0;	
	}