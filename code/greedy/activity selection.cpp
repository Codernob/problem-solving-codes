#include <bits/stdc++.h>
using namespace std;
class activity {
public:
	int startAt;
	int endAt;
	};
bool compareActivity(activity a1,activity a2) {
	if(a1.endAt>=a2.endAt) return false;
	else return true;
	}
int main() {
int numberOfEvents;
cin>>numberOfEvents;
activity activities[numberOfEvents];
for(int i=0;i<numberOfEvents;i++) {
	cin>>activities[i].startAt;
		}
for(int i=0;i<numberOfEvents;i++) {
	cin>>activities[i].endAt;
		}
sort(activities,activities+numberOfEvents,compareActivity);
cout<<"activity 1 will start at "<<activities[0].startAt<<" and end at "<<activities[0].endAt<<endl;
int count=1;
for(int i=1;i<numberOfEvents;i++) {
	if(activities[i].startAt>=activities[count-1].endAt)
	cout<<"activity "<<++count<<" will start at "<<activities[i].startAt<<" and end at "<<activities[i].endAt<<endl;
		}
	}
