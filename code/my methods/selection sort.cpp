#include <iostream>
using namespace std;
void selectionSort(int a[],int s) {
	int i,j,idx,min;
	for(i=0;i<s;i++) {
		idx=i;
		min=a[i];
		for(j=i+1;j<s;j++) {
			if(a[j]<a[idx]) {
				min=a[j];
				idx=j;
				}
			}
		swap(a[i],a[idx]);
	}
}
int main() {
int a[9]={29,72,98,87,36,66,52,51,13};	
selectionSort(a,9);
for(int i=0;i<9;i++) cout<<a[i]<<" ";
return 0;
}
