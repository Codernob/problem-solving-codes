#include<iostream>
using namespace std;
class strings {
public:
char x[10];
strings() {}
strings(char *p) {
	strcpy(x,p);
	}
strings operator+(strings &obj) {
strings ans;
strcpy(ans.x,strcat(this->x,obj.x));
return ans;
	}
};
int main() {
strings a("fa"),b("ce"),c;
c=a+b;
cout<<c.x;
}
