#include<iostream>
#include<cmath>
using namespace std;
int main() {
unsigned long long int L,S1,S2,q;
double t;
int Q,i;
cin>>L>>S1>>S2;
cin>>Q;
for(i=1;i<=Q;i++) {
cin>>q;
t=(sqrt(2)*(L-sqrt(q)))/(S1>S2?S1-S2:S2-S1);
printf("%.4lf\n",t);
	}
}
