﻿#include <iostream>
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
cout<<sumofdigits(12);
}
