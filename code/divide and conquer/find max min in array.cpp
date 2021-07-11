#include <iostream>
#include <climits>
#include <utility>
using namespace std;
typedef pair<int,int> pii;
int arr[9]={150,40,5,-9,45,190,65,170,75};
pii maxmin(int low, int high) {
cout<<"low = "<<low<<" high = "<<high<<endl;
int maximum=INT_MIN,minimum=INT_MAX;
if(low==high) {
	//only one element in sublist
	maximum=minimum=arr[low];
	return make_pair(maximum,minimum);
	}	
else if(low==high-1) {
	//only two elements in sublist
		maximum=arr[low]<=arr[high]?arr[high]:arr[low];
		minimum=arr[low]>=arr[high]?arr[high]:arr[low];
	return make_pair(maximum,minimum);
	}
//more than two elements in sublist
int mid=(low+high)/2;
pii left=maxmin(low,mid);
pii right=maxmin(mid+1,high);
maximum=left.first>=right.first?left.first:right.first;
minimum=left.second<=right.second?left.second:right.second;
return make_pair(maximum,minimum);

	}
int main() {
pii temp=maxmin(0,8);
cout<<temp.first<<" "<<temp.second;
return 0;	
	}
