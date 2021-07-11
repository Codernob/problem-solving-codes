#include<stdio.h>
int main()
{
	char C,i,j;
    scanf("%c",&C);
    for(i='A';i<=C;i++)
      { for(j='A';j<=i;j++)
            {  printf("%c",j);
            }
            printf("\n");
      }
}