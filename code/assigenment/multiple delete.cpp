#include <bits/stdc++.h>
using namespace std;
void bubblesort(int *a,int size) {
int i,j;
for(i=0;i<size-1;i++) {
for(j=0;j<size-i-1;j++) {
if(*(a+j)<*(a+j+1)) {
*(a+j)=*(a+j)+*(a+j+1);
*(a+j+1)=*(a+j)-*(a+j+1);
*(a+j)=*(a+j)-*(a+j+1);
				}	
			}	
		}
	}
void deleteElement(int array[],int index,int sizeOfArray) {
for(int i=index;i<sizeOfArray-1;i++) 
	array[i]=array[i+1];
	}
int main() {
int sizeOfArray,numberOfElementsToDelete;
cin>>sizeOfArray;
int array[sizeOfArray];	
for(int i=0;i<sizeOfArray;i++) cin>>array[i];
cin>>numberOfElementsToDelete;
int deleteIndexes[numberOfElementsToDelete];
for(int i=0;i<numberOfElementsToDelete;i++) cin>>deleteIndexes[i];
bubblesort(deleteIndexes, numberOfElementsToDelete);
for(int i=0;i<numberOfElementsToDelete;i++) {
deleteElement(array,deleteIndexes[i],sizeOfArray--);
	}
for(int i=0;i<sizeOfArray;i++) cout<<array[i]<<" ";
return 0;	
	}
