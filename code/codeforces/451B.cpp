#include <iostream>
#include <algorithm>
using namespace std;
void printarray(int *a,int n) {
for(int i=0;i<n;i++) printf("%d ",*(a+i));
cout<<"\n";
}
bool isSorted(int *a,int size) {
for(int i=1;i<size;i++) {
	if( *(a+i-1) > *(a+i) ) return false;
		}
return true;
	}
int main() {
int n,i,j,t1,t2;
bool finished=false;
int a[n];
scanf("%d",&n);
for(i=0;i<n;i++) scanf("%d",&a[i]);
//printarray(a,n);
for(i=0;i<n && !finished;i++) {
	for(j=i;j<n && !finished;j++) {
//cout<<"i = "<<i<<" j = "<<j<<"\n";
//printarray(a,n);
t1=a[i]; t2=a[j];
		reverse(a+i,a+j+1); 
//cout<<"after reversing : ";
//printarray(a,n);
		if(isSorted(a,n)==true) {
			cout<<"yes\n"<<t2<<" "<<t1<<"\n";
		finished=true;
		break;
			}
		reverse(a+i,a+j+1);
		}	
	}	
if(!finished) cout<<"no\n";	
return 0;	
}