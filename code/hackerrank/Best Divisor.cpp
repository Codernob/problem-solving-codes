#include<iostream>
using namespace std;
int sumofdigits(int n) {
int sum=0;
while(n!=0) {
	sum=sum+n%10;
	n=n/10;
		}
return sum;
	}
int main() {
int n,i,j,size=0;
cin>>n;
for(i=1;i<=n;i++) {
if(n%i==0) size++;
	}
int divisors[size];
int k=0;
for(i=1;i<=n;i++) {
if(n%i==0) divisors[k++]=i;
	}
int sum[size];
for(i=0;i<size;i++) {
sum[i]=sumofdigits(divisors[i]);
	}
int best[size];
for(i=1;i<size;i++) {
	best[i]=0;
	}
for(i=0;i<size;i++) {
	for(j=0;j<size;j++) {
		if(sum[j]>sum[i]) {
			best[i]=0;
			best[j]=1;
			}
    if(sum[j]<sum[i]) {
    best[i]=1;
    best[j]=0;
    }
		if(sum[j]==sum[i]) {
		if(divisors[j]<divisors[i]) {
			best[j]=0;
			best[i]=1;	
				}
		else if(divisors[j]<divisors[i]) {
			best[i]=0;
			best[j]=1;
				}
			}
		}
	}
for(i=0;i<size;i++) {
cout<<divisors[i]<<" ";
	}
cout<<endl;
for(i=0;i<size;i++) {
cout<<sum[i]<<" ";
	}
cout<<endl;
for(i=0;i<size;i++) {
cout<<best[i]<<" ";
	}
cout<<endl;
}
