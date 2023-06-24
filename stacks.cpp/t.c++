#include<iostream>
using namespace std;
int min(int a,int b,int c)
{
    if(a<b)
    {
        if(a<c)
        {
            return a;
        }
        return c;
    }
    else{
        if(b<c)
        {
            return b;
        }
        return c;
    }
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int m;
    m=min(a,b,c);
    cout<<m;
    return 0;
}