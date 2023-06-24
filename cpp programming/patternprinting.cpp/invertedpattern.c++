#include<iostream>
using namespace std;
int main()
{
    int i,j,k;
    cin>>k;
    for(i=k;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
