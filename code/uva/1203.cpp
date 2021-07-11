#include <iostream>
using namespace std;
typedef struct record {
int Q_num;
int Period;	
	};
typedef struct answer {
int interval;
int year;
	};
int main() {
int i,k;
string temp;
record records[10000000];
int size=0;	
while(!0) {	
cin>>temp;	
if(temp=="#") break;
cin>>records[size].Q_num;
cin>>records[size++].Period;
}	
cin>>k;
answer answers[10000000];

return 0;
}
