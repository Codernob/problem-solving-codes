#include<stdio.h>
int main() {
char input[10000000];
int i=0,e=1;
while(scanf("%c",&input[i])!=EOF) {
if(input[i]=='"' && e==1) {
	input[i]='`';
	input[i+1]='`';
	i+=2; e=0; continue;
		}
else if(input[i]=='"' && e==0) {
	input[i]='\'';
	input[i+1]='\'';
	i+=2; e=1; continue;
	}
i++;
	}
input[i]='\0';
printf("%s",input);
return 0;
}
