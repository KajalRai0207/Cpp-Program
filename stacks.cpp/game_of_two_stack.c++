#include<iostream>
#include<vector>
using namespace std;
int twoStack(int maxSum,vector<int>a,vector<int>b)
{
    int s=0,t=0,h1=0,h2=0;
    while(s<=maxSum)
    {
        if(a[h1]>b[h2])
        {
            s+=b[h2];
            h2++;
            t++;
        }
        else{
            s+=a[h1];
            h1++;
            t++;
        }
    }
    return t-1;
}
int main()
{
    int num,n,m,maxSum;
    //num=no. of games, n,m=no of element in first and second stack maxSum=maximum sum allowed
    cin>>num>>n>>m>>maxSum;
    vector<int>a(n);
    vector<int>b(m);
    for(int j=0;j<num;j++)
    {
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<m;i++)
        {
            cin>>b[i];
        }
        cout<<twoStack(maxSum,a,b)<<endl;
    }
    return 0;
}   