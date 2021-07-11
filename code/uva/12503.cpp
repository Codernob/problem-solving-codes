#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
int main() {
int t,n,i,j;
char c;
string line;
cin>>t;
for(i=1;i<=t;i++) {
int p=0;
string record;
cin>>n;
cin.get(c);
for(j=1;j<=n;j++) {
getline(cin,line);
if(line=="RIGHT") record+='R';
if(line=="LEFT") record+='L';
if(line[0]=='S') {
	if(line.length()==9) record+=record[line[8]-'0'-1];
	else if(line.length()==10) record+=record[((line[8]-'0')*10)+line[9]-'0'-1];
			}
		}
for(j=0;j<record.size();j++) {
	if(record[j]=='R') p+=1;
	else if(record[j]=='L') p-=1;	
		}
printf("%d\n",p);
	}
return 0;	
}
