#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
char image[100][100];
int w,h,cc;
void cross(int i,int j) {
if(i<0 || j<0 || i>=h || j>=w || image[i][j]=='.' || image[i][j]=='*' || image[i][j]=='S' || image[i][j]=='C') return;	
if(image[i][j]=='X') image[i][j]='C';
cross(i-1,j);
cross(i+1,j);
cross(i,j-1);
cross(i,j+1);
	}
void star(int i,int j) {
if(i<0 || j<0 || i>=h || j>=w || image[i][j]=='.' || image[i][j]=='C' || image[i][j]=='S') return;
if(image[i][j]=='*') image[i][j]='S';
if(image[i][j]=='X') { cc++; cross(i,j); }
star(i-1,j);
star(i+1,j);
star(i,j-1);
star(i,j+1);
	}

int main() {
vector<int> ans;
int t=1;
while(!0) {
scanf("%d %d",&w,&h);	
if(w==0 && h==0) break;
for(int i=0;i<h;i++) {	
	for(int j=0;j<w;j++) {
		cin>>image[i][j];
		}
	}

for(int i=0;i<h;i++) {	
	for(int j=0;j<w;j++) {
		if(image[i][j]=='*') {
			cc=0;
			star(i,j);
			ans.push_back(cc);
				}
			}
		}
sort(ans.begin(),ans.end());
cout<<"Throw "<<t++<<"\n";
for(int i=0;i<ans.size();i++) {
	if(i==ans.size()-1) cout<<ans[i]<<"\n";
	else cout<<ans[i]<<" ";
		}
cout<<"\n";
	}
return 0;	
	}