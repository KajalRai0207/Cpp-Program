#include<iostream>
using namespace std;
int main()
{
    int a,b,c=0,i,n;
    a=0;
    b=1;
    cout<<a<<" ";
    cout<<b<<" ";
    for(i=1;i<=3;i++)
    {
        c=a+b;
        a=b;
        b=c;
        cout<<c<<" ";
    }
    return 0;
}