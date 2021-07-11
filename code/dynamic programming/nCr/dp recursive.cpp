#include <iostream>

using namespace std;
int m[100][100];

int C(int n, int r)
{   
    if(m[n][r] != -1) return m[n][r];
    
    m[n][r] = C(n-1,r)+C(n-1,r-1);
    return m[n][r];
}

int main()
{
    int n,r;
    cin>>n>>r;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++)
        {
            if(j == 0) m[i][j] = 1;
            else if(j == i) m[i][j] = 1;
            else m[i][j] = -1;
        }
    }
    cout<<C(n,r);
    return 0;
}

