#include<iostream>
using namespace std;
int main() {
int a,b,h=1;
cin>>b>>a;
while(!0) {
	if((b*h)/2>=a) {
			cout<<h<<endl;
			break;
		}
	h++;
	}
}
