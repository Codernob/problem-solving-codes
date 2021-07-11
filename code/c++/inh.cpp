#include <iostream>
using namespace std;
class father {
private:
	int a,b;
public:
	int c,d;
	};
class son : public father {
	public:
	void snow() {
		cout<<c;
		}	
	};
int main() {
son s;
s.c=5;
s.snow();	
	}
