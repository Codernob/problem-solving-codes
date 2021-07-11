#include <bits/stdc++.h>

using namespace std;
int bdc[]={1,2,5,10,20,50,100,500,1000};
int main() {
    int n;
    cin>>n;
    int input=n;
    int count=0,taka=0;
    reverse(bdc,bdc+9);
    for(auto note:bdc) {
        if(taka==input) break;
        int temp=n/note;
        //cout<<"n = "<<n<<" note = "<<note<<" temp = "<<temp<<endl;
        taka+=(temp*note);
        n-=(temp*note);
        count+=temp;
    }
    cout<<count<<endl;
}
