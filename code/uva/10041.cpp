#include <iostream>
using namespace std;
void swap(int *a,int *b) {
int temp;
temp=*a;
*a=*b;
*b=temp;
	}
void selectionSort(int a[],int s) {
int i,itr=0,min;
while(itr<9) {
min=a[itr+1];	
for(i=itr+1;i<9;i++) {
	if(a[i]<min) { min=a[i]; s=i; }
	}
swap(&a[itr],&a[s]);	
itr++;	
		}			
	}
int absolute(int n) {
if(n>=0) return n;
else return -n;
	}
int main() {
int t,i,j,n,sum,p,ans;	
cin>>t;	
for(i=1;i<=t;i++) {	
cin>>n;
int a[n],min=INT_MAX,el,max=INT_MIN;
sum=0;
for(j=0;j<n;j++) { 
	cin>>a[j]; 
	if(a[j]>max) max=a[j];  }
selectionSort(a,n);
p=0;
while(p<=max) {
el=0;
for(j=0;j<n;j++) { el+=absolute(a[j]-p); }
if(el<min) ans=el;
p++;
}
cout<<ans<<endl;
	}
return 0;		
}
