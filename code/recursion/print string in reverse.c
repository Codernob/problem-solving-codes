#include <stdio.h>
void r(char *p) {
	if(*p!='\0') r(p+1);
	else return;
	printf("%c",*p);
	}
main() {
char s[90]="abcdefghijk";
r(s);
}
