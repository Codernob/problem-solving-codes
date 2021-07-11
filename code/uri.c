#include<stdio.h>
#include<math.h>
int main() {
float A,B,C,R1,R2,N;
scanf("%f %f %f",&A,&B,&C);
N=(B*B)-(4*A*C);
if(N<0 || A==0) {
printf("Impossivel calcular\n");
return 0;
 }
R1=(-B+sqrt(N))/(2*A);
R2=(-B-sqrt(N))/(2*A);
printf("R1 = %.5f\nR2 = %.5f\n",R1,R2);
	
}	
