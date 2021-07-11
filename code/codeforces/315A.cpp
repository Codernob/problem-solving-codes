#include <iostream>
using namespace std;
int main() {
int n,i,j,count=0;
bool found;
scanf("%d",&n);	
int bottles[n][2];	
for(i=0;i<n;i++) {	
scanf("%d %d",&bottles[i][0],&bottles[i][1]);	
		}
for(i=0;i<n;i++) {
	found=false;
	for(j=0;j<n;j++) {
			if(bottles[j][1]==bottles[i][0] && i!=j) {
				found=true;
				break;
				}
			}
	if(!found) count++;
		}
printf("%d\n",count);			
return 0;	
	}
