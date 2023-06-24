#include<iostream>
using namespace std;
int main()
{
   
    int row,col;
    cout<<"Enter no. of row and column"<<endl;
    cin>>row>>col;
    cout<<"Enter elemnts of row"<<endl;

    int arr[row][col];
    for(int i =0;i<row;i++)
    {for(int j=0;j<col;j++)
        {cin>>arr[i][j];
        }
    }

    cout<<"Enter no. to be searched"<<endl;
    int target;
    cin>>target;
    bool found= false;
    int r=0,c=col-1,flag=0;
    while(r<row && c>=0)
    {
        if(arr[r][c]==target)
        {
            found=true;
        }
        if(arr[r][c]>target)
        {
            c--;
        }
        else
        {
            r++;
        }
    }
    if(found)
    {
        cout<<"T";
    }
    else{
        cout<<"F";
    }
}