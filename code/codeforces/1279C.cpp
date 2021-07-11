#include <iostream>
#include <stack>
#include <vector>
#include<algorithm>
using namespace std;
int main() {
int i,j,k,t,n,m,temp,time;
vector<int> line2,lst,reserve;
scanf("%d",&t);
cout<<"t = "<<t<<endl;
for(i=0;i<t;i++) {
time=0;
stack<int> s;
scanf("%d %d",&n,&m);
cout<<"n = "<<n<<" m = "<<m<<endl;
for(j=0;j<n;j++) {
	 scanf("%d",&temp);
	 line2.push_back(temp);
	 }
cout<<"line2 = ";
for(auto a:line2) cout<<a<<" ";
cout<<"\n";
for(j=line2.size()-1;j>=0;j--) {
	s.push(line2[j]);
	}
cout<<"top of stack = "<<s.top()<<endl;
for(j=0;j<m;j++) {
	scanf("%d",&temp);
	lst.push_back(temp);
	}
cout<<"lst = ";
for(auto a:lst) cout<<a<<" ";
cout<<endl;
for(j=0;j<lst.size();j++) {
	cout<<"j= "<<j<<endl;
	temp=s.top();
	cout<<"temp = "<<temp<<" lst[j] = "<<lst[j]<<endl;
	if(temp==lst[j]) {
		cout<<"temp equal to s[j], s popped and time++"<<endl;
		s.pop();
		time++;
		}
	else {
		cout<<"temp!=lst[j]\n so a while loop is starting";
            while(!0) {
            	cout<<"\ninside the while loop\n";
                temp=s.top();
                cout<<"temp has s.top() in it now\n";
                if(temp==lst[j]) {
                	cout<<"temp is equal to lst[j], so popping stack, time++, breaking out of while loop\n";
                s.pop();
                time++;
                break;
                    }
            cout<<"s.top() not equal to lst[j]\n";
            reserve.push_back(temp);
            cout<<"s.top() pushed to reserve\n";
            cout<<"rearranging reserve array using k loop\n";
            for(k=j;k<lst.size();k++) {
            	cout<<"k = "<<k<<" lst[k] = "<<lst[k]<<endl;
            	cout<<"reserve vector = ";
            	for(auto a:reserve) cout<<a<<" ";
            	cout<<"\n";
                if(find(reserve.begin(), reserve.end(),lst[k])!=reserve.end()) { 
                	cout<<"lst[k] is present in reserve vector. so swapping "<<lst[k]<<" and first element of vector\n"<<endl;
                	iter_swap(find(reserve.begin(), reserve.end(),lst[k]),reserve.begin());  
                			}
                        }
                }
                while(!0) {
                    if(reserve.empty()) break;
                    s.push(reserve[reserve.size()-1]);
                    reserve.pop_back();
                    time++;
                }
			}
	}
printf("%d\n",time);
line2.clear();
lst.clear();
		}
return 0;
	}
