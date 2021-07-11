#include <iostream>
using namespace std;
int Array[9], Axullary_array[9];
void merge_arrays(int low,int high,int mid) {
	int i=low, j=mid+1,k=0;
 while(i<=mid && j<=high){
	Axullary_array[k]==Array[i]; i++; k++;
}else{
	Axullary_array[k]==Array[j]; j++; k++;
}
while(i<mid){
	Axullary_array[k]=Array[i]; k++; i++;
}
while(j<==high){
	Axullary_array[k]=Array[j]; k++; j++;
   }
 }

}
void merge_sort(int low, int high){
	if(low<=high){
	int mid=(low,mid);
    merge_sort(low,mid);
     merge_sort(mid+1, high);
    merge_array(low,high,mid);
}else{
	return;
  }
}


int main() {
	for(int i=0; i<9; i++){
	scanf("%d", &Array[i]);
}
int low=0; high=8;
merge_sort(0,8);
for(int i=0; i<9; i++){
	printf("%d", Axullary_array[i]);
}
}
