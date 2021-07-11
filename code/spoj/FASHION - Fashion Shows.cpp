#include <iostream>
using namespace std;
void bubblesort(int *a,int size) {
int i,j;
for(i=0;i<size-1;i++) {
for(j=0;j<size-i-1;j++) {
if(*(a+j)>*(a+j+1)) {
*(a+j)=*(a+j)+*(a+j+1);
*(a+j+1)=*(a+j)-*(a+j+1);
*(a+j)=*(a+j)-*(a+j+1);
				}	
			}	
		}
	}
int main() {
int men[10000],women[10000],i,j,k,t,n,sum;	
cin>>t;
for(i=1;i<=t;i++) {
cin>>n;
sum=0;
for(j=0;j<n;j++) cin>>men[j];
for(j=0;j<n;j++) cin>>women[j];
bubblesort(men,n);
bubblesort(women,n);
for(j=0;j<n;j++) sum+=(men[j]*women[j]);
cout<<sum<<endl;
	}
return 0;	
}
