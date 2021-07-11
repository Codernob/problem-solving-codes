#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main() {
int rows,columns;
string position,instructions;
char orientation;
int x,y;
cin>>rows>>columns;
getchar();
while(!cin.eof()) {	
getline(cin,position);
stringstream ss(position);
string num;
int a[2],idx=0;
while (ss >> num) {
if(idx==2) { orientation=num[0];  break; }
a[idx++]=stoi(num);
    }
x=a[0]; y=a[1];
getline(cin,instructions);
bool lost=false;
for(auto ins:instructions) {
if(orientation=='E') {
if(ins=='L') orientation='N';
else if(ins=='R') orientation='S';
else if(ins=='F') { 
	x+=1;
	if(x>rows) {
	lost=true;
	
	break;
		}
	}
		}	
else if(orientation=='W') {
if(ins=='L') orientation='S';
else if(ins=='R') orientation='N';
else if(ins=='F') {
	x-=1;
	if(x<0) {
	lost=true;
	
	break;
		}
	}
		}
else if(orientation=='N') {
if(ins=='L') orientation='W';
else if(ins=='R') orientation='E';
else if(ins=='F') {
	y+=1;	
	if(y>columns) {
	lost=true;
	
	break;
		}
	}
		}
else if(orientation=='S') {
if(ins=='L') orientation='E';
else if(ins=='R') orientation='W';
else if(ins=='F') {
	y-=1;
	if(y<0) {
	lost=true;
	
	break;
		}
	}
		}
	}
cout<<x<<" "<<y<<" "<<orientation;
if(lost==true) cout<<" LOST\n";
else cout<<"\n";
}	
	
	
	
	}

