#include<iostream>
using namespace std;
int main()
{
    int r,c,i,j,row_start,row_end,column_start,column_end;
    cout<<"Enter no. of rows";
    cin>>r;
    cout<<"Enter no. of column";
    cin>>c;
    int arr[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
           cin>>arr[i][j];
        }  
    }
    row_start=0;    
    row_end=r-1;
    column_start=0;
    column_end=c-1;
    while(row_start<=row_end && column_start<=column_end)
    {
        for(i=column_start;i<=column_end;i++)
        {
            
            cout<<arr[row_start][i]<<" ";
        }
        row_start++;
        for(j=row_start;j<=row_end;j++)
        {
            
            cout<<arr[j][column_end]<<" ";
        }
        column_end--;
        for(int k=column_end;k>=column_start;k--)
        {
            
            cout<<arr[row_end][k]<<" ";
        }
        row_end--;
        for(int l=row_end;l>=row_start;l--)
        {
            
            cout<<arr[l][column_start]<<" ";
        }
        column_start++;   
    }
    return 0;   
}