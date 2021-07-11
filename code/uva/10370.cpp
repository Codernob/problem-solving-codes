#include <iostream>
using namespace std;
int main() {
int i,j,t,n,sum,aa,a[1000];
double avg;
cin>>t;
for(i=1;i<=t;i++) {
cin>>n;
sum=0;
for(j=0;j<n;j++) { cin>>a[j]; sum=sum+a[j]; }
avg=((double)sum)/n;
aa=0;
for(j=0;j<n;j++) {
	if(a[j]>avg) aa++;
			}
printf("%.3lf%%\n",((double)aa/n)*100.0);
		}
return 0;
	}
