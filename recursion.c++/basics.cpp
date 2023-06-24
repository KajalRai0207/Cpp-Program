#include<bits/stdc++.h>
using namespace std;
static int t[1000][1000];
int Discount(int price[],int nutrition[],int m,int n,int k){
    if(m==0 || n==0){
        return 0;
    }
    if(t[m][n]!=-1)
    {
        return t[m][n];
    }
    if(price[n-1]<=m){
        return t[m][n]=max(nutrition[n-1]+Discount(price,nutrition,m-price[n-1],n,k),Discount(price,nutrition,m,n,k));
    }
    if(price[n-1]>m){
        return t[m][n]=Discount(price,nutrition,m,n,k);
    }
}

int main()
{
    memset(t,-1,sizeof(t));
    int n=3,m=4,k=1;
    int price[]={2,4,5};
    int nutrition[]={20,17,15};
    cout<<Discount(price,nutrition,m,n-1,k);
    return 0;
}