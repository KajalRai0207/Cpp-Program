#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"Enter no. of rows";
    cin>>r;
    cout<<"Enter no. of column";
    cin>>c;
    int ar[r][c];
    for(int i =0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>ar[i][j];
        }
    }
    cout<<"Transpose matrix";
    int arr[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            arr[i][j]=ar[j][i];
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


}