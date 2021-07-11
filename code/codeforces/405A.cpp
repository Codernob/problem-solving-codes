#include<bits/stdc++.h>
using namespace std;
void bubblesort(int *a,int size) {
int i,j;
for(i=0;i<size-1;i++) {
for(j=0;j<size-i-1;j++) {
if(*(a+j)>*(a+j+1)) {
*(a+j)=*(a+j)+*(a+j+1);
*(a+j+1)=*(a+j)-*(a+j+1);
*(a+j)=*(a+j)-*(a+j+1);
				}	
			}	
		}
	}
int main() {
int n,i;	
scanf("%d",&n);	
int a[n];
for(i=0;i<n;i++) scanf("%d",&a[i]);	
bubblesort(a,n);
for(i=0;i<n;i++) printf("%d ",a[i]);
printf("\n");
return 0;	
}