#include<stdio.h>
int length(char *p) {
	int i;
	for(i=0;*p!='\0';i++,p++);
	return i;
}
main(){ 
int i,j,idx=-1;
char s[50]="this is a sentence";
char w[10]="this";
for(i=0;i<length(s);i++) {
	if(s[i]==w[0]) {
		for(j=1;j<length(w);j++) 
			if(w[j]!=s[i+j]) break;
		if(j==length(w)) {
			idx=i;
			break;
			}
		}
	}
if(idx==-1) printf("not found");
else printf("found at %d index",idx);
}
