#include<iostream>
#include <cmath>
using namespace std;
int main() {
double n,r;
cin>>n;
r=((pow(-1.0,n)*n)/2.0)+((pow(-1.0,n)/4.0))-(1/4.0);
printf("%.0lf\n",r);
	
return 0;
}
