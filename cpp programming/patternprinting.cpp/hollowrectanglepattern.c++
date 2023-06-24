#include<iostream>
using namespace std;
int main()
{
    int j,i;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
        {
            if(i==1||i==4||j==1||j==4)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;

    }
}