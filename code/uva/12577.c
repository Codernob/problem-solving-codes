#include<stdio.h>
#include<string.h>
int main() {
int i=1;
char input[5];
while(!0) {
	scanf("%s",input);
	if(strcmp(input,"*")==0) {
		break;
		}
	if(strcmp(input,"Hajj")==0) {
	printf("Case %d: Hajj-e-Akbar\n",i);
		}
	if(strcmp(input,"Umrah")==0) {
	printf("Case %d: Hajj-e-Asghar\n",i);
		}
	i++;
	}	
return 0;
}