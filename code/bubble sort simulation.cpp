#include <iostream>
using namespace std;
void printArray(int a[],int size) {
for(int i=0;i<size;i++) printf("%d ",a[i]);
cout<<endl;	
	}
int main() {
int a[5]={5,4,3,2,1};
int i,j;
for(i=0;i<5;i++) {
	for(j=0;j<5-1;j++) {
		if(a[j]>a[j+1]) swap(a[j],a[j+1]);
		printArray(a,5);
		}
	cout<<endl;
	}
return 0;	
}