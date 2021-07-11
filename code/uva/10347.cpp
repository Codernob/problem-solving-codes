#include <iostream>
#include <math.h>
using namespace std;
int main() {
long double m1,m2,m3,sm,A;
while(scanf("%Lf %Lf %Lf",&m1,&m2,&m3)!=EOF) {
sm=0.5*(m1+m2+m3);
if(sm<=0 || sm-m1<=0 || sm-m2<=0 || sm-m3<=0) A=-1;
else {
	A=(4.0/3)*(sqrt(sm*(sm-m1)*(sm-m2)*(sm-m3)));
		}
printf("%.3Lf\n",A);
	}
return 0;
}