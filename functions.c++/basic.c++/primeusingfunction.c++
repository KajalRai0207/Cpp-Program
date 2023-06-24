#include<iostream>
#include<cmath>
using namespace std;
bool isprime(int num)
{
    
    for(int j=2;j<=sqrt(num);j++)
    {
        if(num%j==0 )
        {
            return false;
        }
    }
    return true;

}
int main()
{
    int a,b;
    cin>>a>>b;
    for(int j=a;j<=b;j++)
    {
        if(isprime(j) && j!=0 && j!=1)
        {
            cout<<j<<" ";
        }
    }
}