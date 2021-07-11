#include <bits/stdc++.h>
using namespace std;
typedef struct data {
	int growth;
	int monthNumber;
	};
int main() {
int k,i,j,temp1,temp2,g=0,sum=0;
data records[12];	
scanf("%d",&k);
if(k==0) { cout<<"0\n"; return 0; }
for(int i=0;i<12;i++) {
records[i].monthNumber=i+1;
scanf("%d",&records[i].growth);
sum+=records[i].growth;
}
if(sum<k) { cout<<"-1\n"; return 0; }
/*for(i=0;i<12;i++) {
cout<<records[i].growth<<" ";
	}
cout<<endl;
for(i=0;i<12;i++) {
cout<<records[i].monthNumber<<" ";
	}*/
for(i=0;i<11;i++) {
	for(j=0;j<11-i;j++) {
		if(records[j].growth<records[j+1].growth) {
			temp1=records[j].growth;
			temp2=records[j].monthNumber;
			records[j].growth=records[j+1].growth;
			records[j].monthNumber=records[j+1].monthNumber;
			records[j+1].growth=temp1;
			records[j+1].monthNumber=temp2;
			}
		}
	}
/*cout<<endl;
for(i=0;i<12;i++) {
cout<<records[i].growth<<" ";
	}
cout<<endl;
for(i=0;i<12;i++) {
cout<<records[i].monthNumber<<" ";
	}*/
for(i=0;i<12;i++) {
g+=records[i].growth;
if(g>=k) break;	
	}
cout<<endl;
printf("%d\n",i+1);
return 0;	
}