#include<iostream>
double absolute(double n) {
return n<0?(-n):n;
	}
using namespace std;
int main() {
double h,m,ans,ph,pm,d1,d2;
while(!0) {
scanf("%lf:%lf",&h,&m);
if(h==0 && m==0) break;
ph=h*30+m*0.5;
pm=m*6;
d1=absolute(pm-ph);
d2=360.0-d1;
if(d1<d2) ans=d1;
else if(d2<d1) ans=d2;
else ans=d1;		
printf("%.3lf\n",ans);
	}	
return 0;	
}
