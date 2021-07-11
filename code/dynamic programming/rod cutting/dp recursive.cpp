
#include <iostream>

using namespace std;
int p[100];
int M[100];

int cutrod(int n)
{
    if(M[n]!=-1) return M[n];
    int maxval = -1;
    for(int i=1;i<=n;i++) maxval = max(maxval,cutrod(n-i)+p[i]);
    M[n] = maxval;
    return M[n];
}

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>p[i];
    M[0] = 0;
    for(int i=1;i<=n;i++)M[i]=-1;
    
    cout<<cutrod(n);

    return 0;
}

