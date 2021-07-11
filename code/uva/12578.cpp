#include <iostream>
#include<cmath>
using namespace std;
int main() {
int i,t;
double L;
cin>>t;
for(i=1;i<=t;i++) {
cin>>L;
printf("%.2lf %.2lf\n",(acos(-1)*(L*L)/25.0),(L*L*(3/5.0-(acos(-1)/25.0))));
	}	
return 0;	
}