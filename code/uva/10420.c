#include <stdio.h>
#include <string.h>
typedef struct 
 {
 	char string[75];
 	char country[75];
 }line;
int main() {
int n,i,j;
scanf("%d",&n);
getchar();
line lines[n];
for(i=0;i<n;i++) {
gets(lines[i].string);
for(j=0;j<strlen(lines[i].string);j++) {
	printf("%s\n",lines[i].string);
	if(lines[i].string[j]==' ') { lines[i].country[j]='\0';
		break; }
	lines[i].country[j]=lines[i].string[j];
		}
	}
int count,freq[n];
for(i=0;i<n;i++) freq[i]=-1;
for(i=0;i<n;i++) {
count=1;
for(j=i+1;j<n;j++) {
if(strcmp(lines[i].country[i],lines[j].country[j])==0) {
	count++;
	freq[j]=0; }
	}
	if(freq[i]!=0) freq[i]=count;
}
for(i=0;i<n;i++) {
printf("%d\n",freq[i]);	
}
/*for(i=0;i<n;i++) {
if(freq[i]!=0) printf("%s %d\n",lines[i].country,freq[i]);	
}*/
return 0;
}
