#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int superDigit(string n, int k) {
if(n.size()==1) return n[0]-'0';
else {
long long int sum=0;
for(auto c:n) {
	sum+=(c-'0');
		}
//now sum has summation of all digits in n
string s;
while(!0) {
if(sum==0) break;
s+=((sum%10)+'0');
sum/=10;
		}
reverse(s.begin(),s.end());
//now s is the string representation of sum
return superDigit(s,k);
	}
}

int main() {
string n,p; int k;	
cin>>n>>k;
for(int i=1;i<=k;i++) p+=n;
cout<<superDigit(p,k)<<"\n";
	}
