#include<bits/stdc++.h>
using namespace std ;
int t[1002][102];
int knapsack(int wt[],int val[],int w, int n)
{
    if(w==0 || n==0)
    {
        return 0;
    }
    if(t[w][n]!=-1)
    {
        return t[w][n];
    }
    if(wt[n-1]<=w)
    {
        return t[w][n]=max(val[n-1]+knapsack(wt,val,w-wt[n-1],n-1),knapsack(wt,val,w,n-1));
    }
    if(wt[n-1]>w)
    {
        return t[w][n]=knapsack(wt,val,w,n-1);
    }
}
int main()
{
    memset(t,-1,sizeof(t));
    int wt[]={1,2,3,4,5};
    int val[]={10,2,4,5,7};
    cout<<knapsack(wt,val,5,4);
    return 0;

}