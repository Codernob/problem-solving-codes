#include<stdio.h>
int bnsearch(int a[],int size,int key) {
int f=0,l=size-1,mid=(f+l)/2,flg=0;
while(f<=l) {
if(*(a+mid)>key) l=mid-1;
else if(*(a+mid)<key) f=mid+1;
else if(*(a+mid)==key) { flg=1; return mid; }
mid=(f+l)/2;
	}
if(flg==0) return 0;
}
int main() {
int a[]={1,2,3,4,5};
int found=bnsearch(a,5,5);
if(found==0) printf("not found");
else printf("found at %d",found);
}