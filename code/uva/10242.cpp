#include <iostream>
using namespace std;
class point {
public:
double x,y;	
	};
int main() {
point p,q,r,s,a,b,c;
while(scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&p.x,&p.y,&q.x,&q.y,&r.x,&r.y,&s.x,&s.y)!=EOF) {
if(p.x==q.x && p.y==q.y) {
a=r; c=s; b=p;
	}
else if(p.x==r.x && p.y==r.y) {
	b=p; a=q; c=s;
	}
else if(p.x==s.x && p.y==s.y) {
	b=p; a=q; c=r;
	}
else if(q.x==r.x && q.y==r.y) {
	b=q; a=p; c=s;
	}
else if(q.x==s.x && q.y==s.y) {
	b=q; a=p; c=r;
	}
else if(r.x==s.x && r.y==s.y) {
	b=r; a=p; c=q;
	}
printf("%.3lf %.3lf\n",(a.x)+(c.x)-(b.x),(a.y)+(c.y)-(b.y));
	}
return 0;	
}
