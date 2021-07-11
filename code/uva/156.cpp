#include <bits/stdc++.h>
using namespace std;
string dictionary[100000],anagrams[100000],temp;
struct alphabet {
	char c;
	int n;
	};
bool compare(string s1,string s2) {
transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
if((s1.size())!=(s2.size())) return false;
alphabet record1[26];
alphabet record2[26];
char ch='a';
for(int i=0;i<26;i++) {
	record1[i].c=ch;
	record2[i].c=ch;
	ch++;
	record1[i].n=0;
	record2[i].n=0;
		}
for(int i=0;i<s1.size();i++) {
	ch=s1[i];
	for(int j=0;j<26;j++) {
if(record1[j].c==ch) record1[j].n++;	
		}
	}
for(int i=0;i<s2.size();i++) {
	ch=s2[i];
	for(int j=0;j<26;j++) {
if(record1[j].c==ch) record2[j].n++;	
		}
	}
for(int i=0;i<26;i++) 
	if(record1[i].n!=record2[i].n) return false;
return true;	
}
int main() {
int k=0,s=0;
while(!0) {	
cin>>temp;
if(temp=="#") break;	
dictionary[k++]=temp;
	}
bool flag;
for(int i=0;i<k;i++) {
	flag=false;
	for(int j=0;j<k;j++) {
		if(j==i) j++;
		if(compare(dictionary[i],dictionary[j])==true) { flag=true; break; }
		}
	if(flag==false) anagrams[s++]=dictionary[i];
	}
sort(anagrams,anagrams+s);
for(int i=0;i<s;i++) cout<<anagrams[i]<<endl;
return 0;	
	}
