#include<iostream>
using namespace std;
template < class T>
class pairing {
private:
	T a,b;
public:
	pairing(T x,T y) :
	a(x), b(y) {};
	T bigger();
};
template < class T>
T pairing<T>::bigger() {
return a>b?a:b;
} 
int main() {
pairing <int> n(1,2);
cout<<n.bigger();
}
