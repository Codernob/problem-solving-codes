#include <stdio.h>
#include <string.h>
int same(char str1[],char str2[]) {
int l=strlen(str1)>strlen(str2)?strlen(str1):strlen(str2);
for(int i=0;i<l;i++) {
if(str1[i]!=str2[i]) return 0;
	}	
return 1;
}
int main() {
int i,j,k,idx;
char s1[200],s2[200],s3[200],c1[200],c2[200];
scanf("%s\n%s\n%s",s1,s2,s3);
idx=0;
for(i=0;i<strlen(s1);i++) 	{
for(j=0;j<strlen(s3);j++) {
if(s1[i]==s3[j]) {
c1[idx++]=s1[i];
for(k=j;k<=strlen(s3);k++) s3[k]=s3[k+1];
j=500;
			}
		}	
	}
c1[idx]='\0';
idx=0;
for(i=0;i<strlen(s2);i++) 	{
for(j=0;j<strlen(s3);j++) {
if(s2[i]==s3[j]) {
c2[idx++]=s2[i];
for(k=j;k<=strlen(s3);k++) s3[k]=s3[k+1];
j=500;
			}
		}	
	}
c2[idx]='\0';
if(same(s1,c1)==1 && same(s2,c2)==1 && s3[0]=='\0') printf("YES\n");
else printf("NO\n");		
return 0;	
}
