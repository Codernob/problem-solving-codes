#include<stdio.h>
#include<string.h>
int ispresent(char s[],char c) {
int i;
for(i=0;i<strlen(s);i++) {
if(s[i]==c) return 1;
	 }
return 0;
	}
int main() {
char output[1000]="",input[1000];
int i,j,k,t,idx;
scanf("%d",&t);
for(i=1;i<=t;i++) {
scanf("%s",input);
idx=0;
for(j=0;j<strlen(input);j++) 	{
for(k=0;k<strlen(input);k++) {
if(input[j]==input[k] && input[k]!=input[k+1] && ispresent(output,input[k])==0)  {
output[idx++]=input[k];
				}
			}
		}
idx='\0';
printf("%s\n",output);
	}
return 0;	
}
