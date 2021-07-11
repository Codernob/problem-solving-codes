#include <iostream>
using namespace std;
void insertionSort(int array[],int size) 
{
    int i,j,temporaryVariable;
    i=1;
    while(i<size) 
    {
        temporaryVariable = array[i];
        j=i-1;
        while(j>=0 && array[j] >temporaryVariable) 
        {
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=temporaryVariable;
    i++; 
    }
}
int main() {
int array[]={9,7,3,5,4,8};
insertionSort(array,sizeof(array)/sizeof(array[0]));	
for(int i=0;i<sizeof(array)/sizeof(array[0]);i++) cout<<array[i]<<" ";
return 0;	
}
