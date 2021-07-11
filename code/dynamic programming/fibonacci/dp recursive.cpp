
#include <iostream>

using namespace std;

int m[100];

int F(int n)
{
    if(m[n] != -1) return m[n];
    
    m[n] = F(n-1)+F(n-2);
    
    return m[n];
}

int main()
{
    int n;
    cin>>n;
    
    m[0] = 0;
    m[1] = 1;
    for(int i=2;i<100;i++)m[i] = -1;
    
    cout<<F(n);
    return 0;
}

