#include<iostream>
using namespace std;
class numbers {
public:
	numbers(int x, int y);
private:
	const int a;
	int b;
};
numbers::numbers(int x, int y) :
a(x),b(y)
 {
cout<<x<<endl<<y;
}
int main() {
numbers num(1,2);
}
