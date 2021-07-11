#include <iostream>

using namespace std;
int p[100]; //price of ith item
int wt[100]; //weight of ith item

//here n is bag number and w is capacity of knapsack
int ks(int n, int w)
{	
	cout<<"ks("<<n<<","<<w<<")\n";
	//base case: 0 number bag reached or capacity is zero
    if(n ==0 || w==0) return 0;
    
    //if nth item reached and it's weight is greater than capacity, we cannot take it (capacity unchanged). so we consider (n-1)th item.
    if(wt[n]>w)return ks(n-1,w);
    
    /*now there are two cases left:
    
    1. we don't choose nth item-
    so we consider (n-1)th item and capacity is unchanged.
    
    2. we choose nth item-
    so we pick the next item (n-1) for next call and capacity w of bag will be decreased by the weight wt[n] of the item we just chose. what this call will return must be added with the price   p[n] of current item. 
    */
    return max(ks(n-1,w),ks(n-1,w-wt[n])+p[n]);
}


int main()
{
	//here n is number of bags and w is capacity of knapsack
    int n,w;
    //cin>>n>>w;
    n=3,w=50;
    //we'll use 1 indexing
    wt[1]=10; wt[2]=20; wt[3]=30;
    p[1]=60; p[2]=100; p[3]=120;
    //for(int i=1;i<=n;i++)cin>>p[i]>>wt[i];
    
    cout<<ks(n,w); //returns maximum total price of items
    
    return 0;
}

