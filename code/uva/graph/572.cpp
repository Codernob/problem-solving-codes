#include <iostream>
using namespace std;
char grid[200][200];
int rows,columns,cc;
void floodfill(int i,int j) {
if(i<0 || j<0 || i>=rows || j>=columns || grid[i][j]=='*' || grid[i][j]=='v') return;
grid[i][j]='v';
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
char c; string line;
while(!0) {
scanf("%d %d",&rows,&columns);
if(rows==0 && columns==0) break;
for(int i=0;i<rows;i++) {
	cin>>line;
	for(int j=0;j<columns;j++) {
		grid[i][j]=line[j];
		}
	}
cc=0;
for(int i=0;i<rows;i++) {
	for(int j=0;j<columns;j++) {
		if(grid[i][j]=='@') {
			cc++;
			floodfill(i,j);
			}
					}
				}
cout<<cc<<"\n";	
		}	
	
return 0;
	}