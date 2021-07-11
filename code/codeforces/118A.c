#include <stdio.h>
#include <string.h>
int main() {
int i,j;
char s[1000];
scanf("%s",s);
for(i=0;i<strlen(s);i++) {
if(s[i]=='A' || s[i]=='O' || s[i]=='Y' || s[i]=='E' || s[i]=='U' || s[i]=='I' || s[i]=='a' || s[i]=='o' || s[i]=='y' || s[i]=='e' || s[i]=='u' || s[i]=='i') {
for(j=i+1;j<strlen(s)+2;j++) {
s[j-1]=s[j];
			}
i--;
		}
	}
for(i=0;i<strlen(s);i++) {
if(((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122)) && s[i-1]!='.'){
for(j=strlen(s)+2;j>=i;j--) {
s[j+1]=s[j];	
			}
s[i]='.';
		}
	}
for(i=0;i<strlen(s);i++) {
if(s[i]>=65 && s[i]<=90){
s[i]+=32;
		}
	}
printf("%s\n",s);
return 0;	
}
