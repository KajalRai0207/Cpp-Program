#include<iostream>
using namespace std;
int main()
{
    int i,j,n,m;
    cin>>n;
    cin>>m;
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
            cout<<arr[i][j];
        }
        cout<<"\n";
    }
    return 0;
}