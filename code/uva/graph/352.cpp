#include <iostream>
#include <vector>
#include <string>
using namespace std;
#define visited 5
int cnt;
int n=30;
int image[30][30];
void floodfill(int i,int j) {
if(i<0 || j<0 || i>=n || j>=n || image[i][j]==visited || image[i][j]==0) return;
image[i][j]=visited;
floodfill(i-1,j-1);
floodfill(i-1,j);
floodfill(i-1,j+1);
floodfill(i,j-1);
floodfill(i,j+1);
floodfill(i+1,j-1);
floodfill(i+1,j);
floodfill(i+1,j+1);
	}

int main() {
int t=1;
string line;
while(scanf("%d",&n)!=EOF) {
	for(int i=0;i<n;i++) {
		cin>>line;
		for(int j=0;j<n;j++) {
			image[i][j]=line[j]-48;
				}
			}
cnt=0;
for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			if(image[i][j]==1) {
				 floodfill(i,j);
				 cnt++;
				 	}
				}
			}
cout<<"Image number "<<t++<<" contains "<<cnt<<" war eagles.\n";
		}
return 0;
	}
