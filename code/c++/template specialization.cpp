#include<iostream>
using namespace std;
template <class T>
class checkint {
public:
checkint(T a) {
cout<<a<<" is not an int\n";
	}
};
template <>
class checkint <int> {
public:
checkint(int a) {
cout<<a<<" is an int\n";
	}
};
int main() {
checkint<int> x(4);
checkint<double> y(1.94);
checkint<char> z('z');
}
