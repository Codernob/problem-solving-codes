#include <stdio.h>
#include <math.h>
int main() {
double x1,y1,x2,y2,distance,d1,d2;
scanf("%lf %lf",&x1,&y1);
scanf("%lf %lf",&x2,&y2);
d1=x1-x2;
d2=y1-y2;
distance=sqrt(d1*d1+d2*d2);
printf("%.4lf\n",distance);
}
