/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int p[100];

int cutrod(int n)
{
    if(n==0)return 0;
    int maxval = -1;
    for(int i=1;i<=n;i++) maxval = max(maxval,cutrod(n-i)+p[i]);
    
    return maxval;
}

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>p[i];
    
    cout<<cutrod(n);

    return 0;
}

