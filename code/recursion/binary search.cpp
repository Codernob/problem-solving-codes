#include <iostream>
using namespace std;
int binarySearch(int arr[], int l, int r, int x)
{ 
cout<<"l= "<<l<<" r= "<<r<<" m ="<<(l+r)/2<<endl;
if (r >= l) { 
int mid = l + (r - l)/2; 
if (arr[mid] == x)  return mid; 
if (arr[mid] > x) return binarySearch(arr, l, mid-1, x); 
return binarySearch(arr, mid+1, r, x); 
} 
return -1; 
} 
int main() {
int a[6]={1,6,10,34,40,90};
binarySearch(a,0,5,30);
return 0;	
}