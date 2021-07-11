#include <iostream>

using namespace std;
int p[100];
int wt[100];
int M[10][100];

int main()
{
    int n,w;
    cin>>n>>w;
    
    for(int i=1;i<=n;i++)cin>>p[i]>>wt[i];
    
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=w;j++)
        {
            if(i==0||j==0)M[i][j]=0;
            else M[i][j]= -1;
        }
    }
    
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=w;j++)
        {
            if(wt[i]>j) M[i][j] = M[i-1][j];
            else M[i][j] = max(M[i-1][j],M[i-1][j-wt[i]]+p[i]);
        }
    }
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=w;j++)
        {
            cout<<M[i][j]<<"\t";
        }
    cout<<endl;
    }
    
    cout<<M[n][w];
    
    return 0;
}

