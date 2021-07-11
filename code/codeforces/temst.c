#include <stdio.h>
#include <string.h>
int main() {
int k;
char s3[100]="fucckyou";
for(k=7;k<=strlen(s3);k++) s3[k]=s3[k+1];
printf("%s",s3);	
	
	
}
