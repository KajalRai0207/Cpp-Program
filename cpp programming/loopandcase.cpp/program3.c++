#include<iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin>>a>>b>>c;
    if(a>b)
    {
        if(a>c)
        {
             cout<<"a is maximum\n";
        }
        else 
        {
        cout<<"c is maximum\n";
        }
    }
    else
    {
        if(b>c)
        {
            cout<<"b is maximum\n";
        }
        else
        {
            cout<<"c is maximum\n";
        } 
    }
    return 0;
}