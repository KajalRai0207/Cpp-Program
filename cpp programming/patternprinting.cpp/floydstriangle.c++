#include<iostream>
using namespace std;
int main()
{
    int i,j,k,row,s=0;
    cout<<"enter the no. of row\n";
    cin>>row;
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++)
        {
            for(k=1;k<=1;k++)
            {
               cout<<" ";
            }
             s=s+1;
             cout<<s;
        }
        cout<<"\n";
    }
    return 0;
}