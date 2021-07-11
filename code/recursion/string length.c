#include <stdio.h>
int l(char *p) {
	if(*p=='\0') return 0;
	else return l(p+1)+1;
	}
main() {
char s[4]="abc";
printf("%d",l(s));
}
