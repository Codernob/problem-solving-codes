#include <bits/stdc++.h>
using namespace std;
typedef struct level {
	int xi;
	int yi;
	};
int main() {
int s,n,xi,yi,temp1,temp2,flag=1;
scanf("%d %d",&s,&n);
level levels[n];
for(int i=0;i<n;i++) {
cin>>levels[i].xi>>levels[i].yi;	
	}
for(int i=0;i<n-1;i++) {
	for(int j=0;j<n-i-1;j++) {
if(levels[j].xi>levels[j+1].xi) {
	temp1=levels[j].xi;
	temp2=levels[j].yi;
	levels[j].xi=levels[j+1].xi;
	levels[j].yi=levels[j+1].yi;
	levels[j+1].xi=temp1;
	levels[j+1].yi=temp2;
			}
		}	
	}
for(int i=0;i<n;i++) cout<<levels[i].xi<<" "<<levels[i].yi<<endl;
for(int i=0;i<n;i++) {
if(s>levels[i].xi) s+=levels[i].yi;
else {
	flag=0;
	break;
		}	
	}
if(flag==0) printf("NO\n");
else printf("YES\n");
return 0;	
}