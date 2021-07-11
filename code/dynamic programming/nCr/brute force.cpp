#include <iostream>

using namespace std;

int C(int n, int r)
{
    if(r ==0) return 1;
    if(r ==n) return 1;
    
    return C(n-1,r)+C(n-1,r-1);
}

int main()
{
    int n,r;
    cin>>n>>r;
    
    cout<<C(n,r);
    return 0;
}

