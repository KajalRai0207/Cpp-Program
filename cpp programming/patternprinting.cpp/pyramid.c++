#include<iostream>
using namespace std;
int main()
{
    int i,j,k,s;
    cout<<"enter no of row\n";
    cin>>k;
    s=k;
    for(i=1;i<=k;i++)
    {
        for(j=1;j<=s;j++)
        {
            cout<<"*";
        }
        s--;
        cout<<"\n";
    }
    return 0;

}