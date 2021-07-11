#include <stdio.h>
int slen(char *p) {
int l;
for(l=0;*(p)!='\0';l++,p++);
return l;	
}
int same(char s1[],char s2[]) {
int i,l1=slen(s1);
for(i=0;i<l1;i++) 
	if(s1[i]!=s2[i]) return 0;
return 1;
}
int main() {
int i,t,c=0;
char temp[500];
scanf("%d",&t);
for(i=0;i<t;i++) {
scanf("%s",temp);
if(same(temp,"Tetrahedron")==1) c+=4;
else if(same(temp,"Cube")==1) c+=6;
else if(same(temp,"Octahedron")==1) c+=8;
else if(same(temp,"Dodecahedron")==1) c+=12;
else if(same(temp,"Icosahedron")==1) c+=20;
	}	
printf("%d\n",c);
return 0;	
}
