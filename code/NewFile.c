#include <stdio.h>
int main() {
int a[20],freq[20],i,j,n=10,count;
for(i=0;i<n;i++) scanf("%d",&a[i]);
for(i=0;i<n;i++) {
	count=1;
	for(j=i+1;j<n;j++) {
		if(a[i]==a[j]) {
			count++;
			freq[j]=0;
			}
		}
	if(freq[i]!=0) a[i]=count;
	}
for(i=0;i<n;i++) {
	if(freq[i]!=0) {
		printf("%d occurs %d times\n",a[i],freq[i]);
		}
	}
	
}