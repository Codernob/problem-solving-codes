#include <stdio.h>
void convert(int x,int store[]) {
int idx=7;
while(x!=1) {
store[idx--]=x%2;
x=x/2;
	}
}
int s1[8],s2[8];
int main() {
char a=150,b=234;
int i;
convert(a,s1);
convert(b,s2);
for(i=0;i<8;i++) printf("%d",s1[i]);
printf("\n");
for(i=0;i<8;i++) printf("%d",s2[i]);
printf("\n");
for(i=0;i<8;i++) {
	if(s1[i]==s2[i]) printf("match at bit %d\n",7-i);
	}
}
