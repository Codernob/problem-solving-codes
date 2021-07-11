/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int p[100];
int M[100];

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>p[i];
    M[0] = 0;
    for(int i=1;i<=n;i++)M[i]=-1;
    
    
    for(int i=1;i<=n;i++){
        int maxval = -1;
        for(int j=1;j<=i;j++) maxval = max(maxval,M[i-j]+p[j]);
        
        M[i] = maxval;
    }
    
    cout<<M[n];

    return 0;
}

