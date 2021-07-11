#include <stdio.h>
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
int slen(char *p) {
int l;
for(l=0;*(p)!='\0';l++,p++);
return l;	
}
int main() {
int i,len,idx=0;
char input[1000];
int a[1000]={0};
scanf("%s",input);
len=slen(input);
for(i=0;i<len;i++) {
if(input[i]!='+') a[idx++]=input[i]-'0';
	}
bubblesort(a,idx);
for(i=0;i<idx;i++) {
if(i==idx-1) printf("%d\n",a[i]);
else printf("%d+",a[i]);
	}
return 0;	
}
