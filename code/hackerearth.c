#include<stdio.h>
#include<string.h>
int main() {
int i,zero=0,one=0,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,nine=0;
char s[200];
gets(s);
for(i=0;i<strlen(s);i++) {
	if(s[i]=='0') zero++;
	else if(s[i]=='1') one++;
	else if(s[i]=='2') two++;
	else if(s[i]=='3') three++;
	else if(s[i]=='4') three++;
	else if(s[i]=='5') five++;
	else if(s[i]=='6') six++;
	else if(s[i]=='7') seven++;
	else if(s[i]=='8') eight++;
	else if(s[i]=='9') nine++; 
	}
printf("0 %d\n1 %d\n2 %d\n3 %d\n4 %d\n5 %d\n6 %d\n7 %d\n8 %d\n9 %d\n",zero,one,two,three,four,five,six,seven,eight,nine);
return 0;	
}