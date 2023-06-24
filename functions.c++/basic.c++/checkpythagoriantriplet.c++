#include<iostream>
using namespace std;
bool triplet(int a,int b,int c)
{
    int x,y,z;
    x=max((a),max(b,c));
    if(x==a)
    {
        y=b;
        z=c;
    }
    else if(x==b)
    {
        y=a;
        z=c;
    }
    else if(x==c)
    {
        y=a;
        z=c;
    }
    if(x*x==y*y+z*z)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}
int main()
{
    system("CLS");
    int a,b,c;
    cin>>a>>b>>c;
    if(triplet(a,b,c))
    {
        cout<<"it is a pythagoran triplet";

    }
    else
    {
        cout<<"it is not a pythagoran triplet";

    }
    
}