#include <iostream>
#include <iomanip>
using namespace std;
int main() {
long double n,nu=0.0,temp;
cin>>n;
for(int i=1;i<=n;i++) {
	cin>>temp; nu=nu+(temp/100.0); 
	}
cout << fixed;
cout << setprecision(12);
cout <<(nu/n)*100<<"\n";
return 0;	
}
