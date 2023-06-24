#include<iostream>
using namespace std;
int factorial(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int n,r;
    float calc=1;
    cin>>n>>r;
    int s=n-r;
    calc=(factorial(n)/(factorial(r)*factorial(s)));
    cout<<calc;
}