#include<stdio.h>
int main() {
int i,j,size,count;
printf("enter size of array:");
scanf("%d",&size);
int a[size],freq[size];
printf("enter array elements:");
for(i=0;i<size;i++) {
	scanf("%d",&a[i]);
	freq[i]=-1; }
for(i=0;i<size;i++) {
	count=1;
	for(j=i+1;j<size;j++) {
		if(a[i]==a[j]) {
		count++;
		a[j]=0;
		}
	}
	if(a[i]!=0) freq[i]=count;
 }
for(i=0;i<size;i++) {
 if(a[i]!=0)
 printf("%d occurs %d times\n",a[i],freq[i]);
 }
}
