#include <iostream>
using namespace std;
class point {
public:
short int x,y;	
};
int main() {
point p[4];
short int i,j,n,m,k=0;	
char a[150][150],ch;
cin>>n>>m;
for(i=0;i<n;i++) {
	for(j=0;j<m;j++) {
			cin>>ch;
			if(ch=='*')
			 { p[k].x=i; p[k].y=j; k++; }
		}
	}
if(p[1].x==p[2].x && p[0].y==p[2].y) {
	p[3].x=p[0].x;
	p[3].y=p[1].y;
	}
if(p[1].x==p[2].x && p[0].y==p[1].y) {
	p[3].x=p[0].x;
	p[3].x=p[2].y;
	}
if(p[0].x==p[1].x && p[1].y==p[2].y) {
	p[3].x=p[2].x;
	p[3].y=p[0].y;
	}
if(p[0].x==p[1].x && p[0].y==p[2].y) {
	p[3].x=p[2].x;
	p[3].y=p[1].y;
	}
/*for(i=0;i<4;i++) {
	cout<<p[i].x<<" "<<p[i].y<<"\n";
	}*/
printf("%d %d\n",p[3].x+1,p[3].y+1);
return 0;	
}
