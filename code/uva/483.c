#include <stdio.h>
char *strrev(char *str)
{
      char *p1, *p2;

      if (! str || ! *str)
            return str;
      for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
      {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
      return str;
}
int main() {
char s[10000000],ch;
while(scanf("%s",s)!=EOF) {
printf("%s",strrev(s));
ch=getchar();
if(ch==' ') printf(" ");
if(ch=="\n") printf("\n");
	}
return 0;
}
