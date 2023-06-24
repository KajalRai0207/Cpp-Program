#include<iostream>
using namespace std;
int main()
{
    int i,j,k,space,row;
    cout<<"enter no. of row\n";
    cin>>row;
    space=row-1;
    for(i=1;i<=row;i++)
    {
        for(k=1;k<=space;k++)
        {
            cout<<" ";
        }
        space--;
        for(j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    return 0;
}