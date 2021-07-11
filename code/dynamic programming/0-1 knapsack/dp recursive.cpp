#include <iostream>

using namespace std;
int p[100];
int wt[100];
int M[10][100]; //using memory to store results. if we choose i items of j weight, price will be M[i][j]

int knapsack(int n, int w)
{
	//if result is already calculated, we return it from memory
    if(M[n][w]!=-1) return M[n][w];
    
    if(wt[n]>w)
    {	
    	//storing result before returning it
        M[n][w] = knapsack(n-1,w);
        return M[n][w];
    }
    //storing result before returning it
    M[n][w] = max(knapsack(n-1,w),knapsack(n-1,w-wt[n])+p[n]);
    return M[n][w];
}


int main()
{
    int n,w;
    cin>>n>>w;
    
    for(int i=1;i<=n;i++)cin>>p[i]>>wt[i];
    
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=w;j++)
        {	
        	//setting up base cases, when 0 items are chosen and capacity is 0
            if(i==0||j==0)M[i][j]=0;
            
            //otherwise result price is not calculated yet, so we store -1
            else M[i][j]= -1;
        }
    }
    cout<<knapsack(n,w);
    
    return 0;
}

