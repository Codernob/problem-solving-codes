#include<stdio.h>
void removefromArray(int A[],int N,int V) {
	int i,f;
	for(i=0;i<N;i++) {
		if(A[i]==V) { f=i; break; }
		}
	for(i=f;i<N-1;i++) A[i]=A[i+1];
	A[N-1]=0;
	for(i=0;i<N;i++) printf("%d ",A[i]);
}
int main() {
	int N,V,i;
	scanf("%d",&N);
	int A[N];
	for(i=0;i<N;i++) scanf("%d",&A[i]);
	scanf("%d",&V);
	removefromArray(A,N,V);
}
