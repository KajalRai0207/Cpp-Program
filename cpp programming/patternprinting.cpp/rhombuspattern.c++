#include<iostream>
using namespace std;
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(k=i;k<=5;k++)
        {
            cout<<" ";
        }
        for(j=1;j<=5;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}