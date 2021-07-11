#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main() {
int test,n,loop,i,j,k,l,t,max,mul;
cin>>test;
vector<int> array;	
for(loop=1;loop<=test;loop++) {
max=INT_MIN;
cin>>n;	
for(int input=0;input<n;input++) {
int integer;
cin>>integer;
array.push_back(integer);
	}
for(i=0;i<array.size();i++) {
	for(j=i+1;j<array.size();j++) {
		for(k=j+1;k<array.size();k++) {
			for(l=k+1;l<array.size();l++) {
				for(t=k+1;t<array.size();t++) {	
if(i<j && j<k && k<l && l<t) {
mul=array[i]*array[j]*array[k]*array[l]*array[t];
if(mul>max) max=mul;
						}
					}
				}
			}
		}
	}
cout<<max<<"\n";
array.clear();
	}	
 
return 0;	
	}