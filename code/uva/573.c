#include <stdio.h>
int main() {
float H,U,D,F;
while(!0) {
scanf("%f %f %f %f",&H,&U,&D,&F);
if(H==0) break;
float distance=0.0,climbed=0.0;
float rate=F*U*0.01;
int d=0;
while(!0) {
if(d==0) climbed=U;
else climbed=climbed-rate;
if(climbed>0) distance=distance+climbed;
if(distance>H) {
d++;
printf("success on day %d\n",d);
break;
	}
distance=distance-D;
d++;
if(distance<0) {
printf("failure on day %d\n",d);
break;
}
/*printf("climbed=%.1f distance=%.1f day=%d\n",climbed,distance,d);*/
		}
	}
return 0;	
}
