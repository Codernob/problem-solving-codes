#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int insertionSort(vector<int> a) {
int i,j,swp=0;
for(i=1;i<(int)a.size();i++) {
	j=i;
	while(j>0 && a[j]<a[j-1]) {
		iter_swap(a.begin() + j, a.begin() + j-1);
		j--;
		swp++;
			}	
		}
cout<<"cards: ";
for(auto au:a) cout<<au<<" ";
cout<<"\n";
cout<<"swp: "<<swp<<endl;
return swp;
	}
struct cardsofsamecolor {
	vector<int> cards;
	int cardsort() {
		return insertionSort(cards);
		}
	};
int main() {
int c,n,x,y,i,j;
cin>>c>>n;
struct cardsofsamecolor cosc[c+1];
for(i=0;i<c*n;i++) {
cin>>x>>y;
cosc[x].cards.push_back(y);
	}
int minSwap=0;
for(int i=1;i<=c+1;i++) {
minSwap+=cosc[i].cardsort();	
	}
cout<<minSwap<<endl;
return 0;	
}