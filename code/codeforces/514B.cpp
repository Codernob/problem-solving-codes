#include <iostream>
#include <set>
using namespace std;
int main() {
int i,x0,y0,n,xi,yi;
double slope;
set<double> slopes;	
cin>>n>>x0>>y0;
for(i=0;i<n;i++) {
cin>>xi>>yi;
if(xi-x0==0) {
	slopes.insert(10E5);
	continue;
	}
slope=((double)(yi-y0))/((double)(xi-x0));
slopes.insert(slope);
	}
cout<<slopes.size()<<endl;	
return 0;	
	}