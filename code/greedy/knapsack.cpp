#include <bits/stdc++.h>
using namespace std;

class bag {
public:
	int weight;
	int total_price;
	int price_per_kg;
	};

bool compareBag(bag b1,bag b2) {
	return b1.price_per_kg>b2.price_per_kg;
	}
	
int main() {
    int n,capacity,filled=0,total=0;
    cin>>n>>capacity;
    bag bags[n];
    for(int i=0;i<n;i++) { 
    	cin>>bags[i].weight;
    	}
    for(int i=0;i<n;i++) { 
    	cin>>bags[i].total_price;
    	bags[i].price_per_kg=bags[i].total_price/bags[i].weight;
    	}
    sort(bags,bags+n,compareBag);
    for(auto a:bags) {
    	cout<<a.weight<<" "<<a.total_price<<" "<<a.price_per_kg<<endl;
    	}
    int itr=0;
    while(filled<=capacity) {
cout<<itr<<endl;
    	int temp=bags[itr].weight-(capacity-filled);
    	if(filled+temp<=capacity) {
    	filled+=temp;
    	total+=temp*(bags[itr].price_per_kg);
    		}
cout<<filled<<" ";
    	itr++;
    	}
cout<<total;
}
