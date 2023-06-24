#include<bits/stdc++.h>
using namespace std;
const int r=6;
const int c=6;
int hourglass(int arr[r][c])
{
    
    int result=INT_MIN;
    int ar1[r-2][c-2];
    if(r<3 || c<3)
    {
        return result=-1;
    }
    else
    {
        for(int i=0;i<4;i++)
        {
            for(int j=0;j<4;j++)
            {
                ar1[i][j]=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+
                arr[i+2][j+1]+arr[i+2][j+2];
                
                result=max(result,ar1[i][j]);
            }
        }   
        return result;  
    }
    
}
int main()
{
    system("CLS");
    int arr[6][6];
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<hourglass(arr);
}