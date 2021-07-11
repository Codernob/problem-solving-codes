#include <iostream>
using namespace std;
int main() {
unsigned long long int y,l,b,h;
while(scanf("%llu",&y)!=EOF) {
l=0,h=0,b=0;
if(y%400==0 || (y%4==0 && y%100!=0)) l=1;
if(y%15==0) h=1;
if(y%55==0 && l==1) b=1;
if(l==1) cout<<"This is leap year."<<endl;
if(h==1) cout<<"This is huluculu festival year."<<endl;
if(b==1) cout<<"This is bulukulu festival year."<<endl;
if(l==0 && h==0 && b==0) 
cout<<"This is an ordinary year."<<endl;
cout<<endl;	
	}
return 0;	
}
