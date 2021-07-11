/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int m[100][100];


int main()
{
    int n,r;
    cin>>n>>r;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++)
        {
            if(j == 0) m[i][j] = 1;
            else if(j == i) m[i][j] = 1;
            else m[i][j] = m[i-1][j] + m[i-1][j-1];
        }
    }
    cout<<m[n][r];
    return 0;
}

