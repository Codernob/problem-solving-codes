#include<stdio.h>
int main() {
int i,n,l,sl,t,temp=0;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++) scanf("%d",&a[i]);
if(a[0]>a[1]) {
l=a[0];
sl=a[1]; }
else { l=a[1]; sl=a[0]; }
for(i=2;i<n;i++) {
t=a[i];
if(t>l) {
sl=l;
l=t;
}
else if(t<l && t>sl) sl=t;
}
printf("%d %d",l,sl);
}
