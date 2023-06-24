#include<iostream>
using namespace std;
int main()
{
    int i,j,k,n1,n2,n3;
    cin>>n1>>n2>>n3;
    int ar1[n1][n2];
    int ar2[n2][n3];
    int ans[n1][n3];
    for(int i =0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            cin>>ar1[i][j];
        }
    }
    for(int i =0;i<n2;i++)
    {
        for(int j=0;j<n3;j++)
        {
            cin>>ar2[i][j];
        }
    }
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n3;j++)
        {
            ans[i][j]=0;
            for(k=0;k<n2;k++)
            {
                ans[i][j]+=ar1[i][k]*ar2[k][j];
            }
        }
    }
    for(int i =0;i<n1;i++)
    {
        for(int j=0;j<n3;j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}