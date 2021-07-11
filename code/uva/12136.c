#include <stdio.h>
int main() {
int t,i,j,k,l,m,wsh,wsm,weh,wem,msh,msm,meh,mem,f;
scanf("%d",&t);
for(i=1;i<=t;i++) {
scanf("%d:%d ",&wsh,&wsm);
scanf("%d:%d\n",&weh,&wem);
scanf("%d:%d ",&msh,&msm);
scanf("%d:%d\n",&meh,&mem);
f=0;
for(j=wsh;j<=weh && f==0;j++) {
	if(j==wsh) k=wsm; else k=0;
	for(;k<60 && f==0;k++) {
		if(j==weh && k==wem+1) break;
for(l=msh;l<=meh && f==0;l++) {
	if(l==msh) m=msm; else m=0;
	for(;m<60 && f==0;m++) {
		if(l==meh && m==mem+1) break;
		if(j==l && k==m) {
					f=1;
				 }
			}
		}
			}
		}
if(f==1) printf("Case %d: Mrs Meeting\n",i);
else printf("Case %d: Hits Meeting\n",i);
	}
return 0;	
}