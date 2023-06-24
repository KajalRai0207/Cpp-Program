#include<iostream>
using namespace std;
int main()
{
    int i,j,n,m,search;
    bool flag=false;
    cin>>n;
    cin>>m;
    cin>>search;
    int arr[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"output"<<"\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
           if(arr[i][j]==search)
           {
                flag=true;
           }
           
        }
    }
    if (flag)
    {
        cout<<"Found";
    }
    else
    {
        cout<<"Not found";
    }
    return 0;
}