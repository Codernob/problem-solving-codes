#include <iostream>
using namespace std;
class passenger {
public:
int floor;
int time;
	};

void bubblesort(passenger *a,int size) {
int i,j;
passenger temp;
for(i=0;i<size-1;i++) {
for(j=0;j<size-i-1;j++) {
if(((a+j)->floor)>((a+j+1)->floor)) {
temp=*(a+j);
*(a+j)=*(a+j+1);
*(a+j+1)=temp;
				}	
			}	
		}
	}

int main() {
int n,s,i,k,t=-1;
cin>>n>>s;
passenger p[n];	
for(i=0;i<n;i++) {
	 cin>>p[i].floor;
	 cin>>p[i].time;
	 }
bubblesort(p,n);
k=n-1;
for(i=s;i>=0;i--)	 {
if(i==p[k].floor) {
//cout<<"k= "<<k<<" "<<"p[k].time= "<<p[k].time<<endl;
if(t<p[k].time) t=t+1+(p[k].time-(t+1));
else t++;
k--;
		}	
else t++;
//cout<<"floor: "<<i<<" t= "<<t<<endl;
	}
cout<<t<<endl;
return 0;	
}